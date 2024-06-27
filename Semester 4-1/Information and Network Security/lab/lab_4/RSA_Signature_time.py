import time
import matplotlib.pyplot as plt
from Crypto.PublicKey import RSA
from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA256

def generate_rsa_keypair(bits=2048):
    key = RSA.generate(bits)
    private_key = key.export_key()
    public_key = key.publickey().export_key()
    return private_key, public_key

def rsa_sign(private_key, data):
    rsa_key = RSA.import_key(private_key)
    h = SHA256.new(data)
    signature = pkcs1_15.new(rsa_key).sign(h)
    return signature

def rsa_verify(public_key, data, signature):
    rsa_key = RSA.import_key(public_key)
    h = SHA256.new(data)
    try:
        pkcs1_15.new(rsa_key).verify(h, signature)
        return True
    except (ValueError, TypeError):
        return False

def measure_execution_time(func, *args):
    start_time = time.time()
    result = func(*args)
    end_time = time.time()
    elapsed_time = end_time - start_time
    return result, elapsed_time

def plot_execution_times(times, labels, title):
    plt.figure(figsize=(10, 6))
    plt.bar(labels, times, color='skyblue')
    plt.xlabel('Key Size (bits)')
    plt.ylabel('Time (seconds)')
    plt.title(title)
    plt.show()

def main():
    key_sizes = [1024, 2048, 3072, 4096]
    sign_times = []
    verify_times = []

    for size in key_sizes:
        private_key, public_key = generate_rsa_keypair(size)
        data = b"Hello, this is some data to sign and verify."

        # Measure RSA signature generation time
        _, sign_time = measure_execution_time(rsa_sign, private_key, data)
        sign_times.append(sign_time)

        # Measure RSA signature verification time
        signature = rsa_sign(private_key, data)
        _, verify_time = measure_execution_time(rsa_verify, public_key, data, signature)
        verify_times.append(verify_time)

    plot_execution_times(sign_times, [str(size) for size in key_sizes], 'RSA Signature Generation Time for Different Key Sizes')
    plot_execution_times(verify_times, [str(size) for size in key_sizes], 'RSA Signature Verification Time for Different Key Sizes')

if __name__ == "__main__":
    main()
