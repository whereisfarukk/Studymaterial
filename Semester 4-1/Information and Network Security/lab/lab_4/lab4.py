import os
import time
import hashlib
import json
from Crypto.Cipher import AES, PKCS1_OAEP
from Crypto.PublicKey import RSA
from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA256
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import get_random_bytes

def generate_aes_key(key_length):
    return get_random_bytes(key_length // 8)

def aes_encrypt_decrypt(mode, key, data, operation='encrypt'):
    cipher = None
    if mode == 'ECB':
        cipher = AES.new(key, AES.MODE_ECB)
    elif mode == 'CFB':
        cipher = AES.new(key, AES.MODE_CFB)
    
    if operation == 'encrypt':
        if mode == 'ECB':
            ciphertext = cipher.encrypt(pad(data, AES.block_size))
        else:
            ciphertext = cipher.encrypt(data)
        return ciphertext
    elif operation == 'decrypt':
        if mode == 'ECB':
            plaintext = unpad(cipher.decrypt(data), AES.block_size)
        else:
            plaintext = cipher.decrypt(data)
        return plaintext

def generate_rsa_keypair(bits=2048):
    key = RSA.generate(bits)
    private_key = key.export_key()
    public_key = key.publickey().export_key()
    return private_key, public_key

def rsa_encrypt(public_key, data):
    rsa_key = RSA.import_key(public_key)
    cipher = PKCS1_OAEP.new(rsa_key)
    return cipher.encrypt(data)

def rsa_decrypt(private_key, data):
    rsa_key = RSA.import_key(private_key)
    cipher = PKCS1_OAEP.new(rsa_key)
    return cipher.decrypt(data)

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

def sha256_hash(data):
    return hashlib.sha256(data).hexdigest()

def measure_execution_time(func, *args):
    start_time = time.time()
    result = func(*args)
    end_time = time.time()
    elapsed_time = end_time - start_time
    return result, elapsed_time

def main():
    while True:
        print("\nCrypto Tool Options:")
        print("1. AES Encryption/Decryption")
        print("2. RSA Encryption/Decryption")
        print("3. RSA Signature")
        print("4. SHA-256 Hashing")
        print("5. Exit")

        choice = input("Choose an option: ")

        if choice == '1':
            data = input("Enter data to encrypt/decrypt: ").encode()
            key_length = int(input("Enter key length (128 or 256): "))
            mode = input("Enter mode (ECB or CFB): ")
            operation = input("Choose operation (encrypt or decrypt): ")

            key = generate_aes_key(key_length)
            result, elapsed_time = measure_execution_time(aes_encrypt_decrypt, mode, key, data, operation)
            print(f"Result: {result}\nTime taken: {elapsed_time} seconds")

        elif choice == '2':
            data = input("Enter data to encrypt/decrypt: ").encode()
            operation = input("Choose operation (encrypt or decrypt): ")

            if operation == 'encrypt':
                private_key, public_key = generate_rsa_keypair()
                result, elapsed_time = measure_execution_time(rsa_encrypt, public_key, data)
                print(f"Encrypted data: {result}\nTime taken: {elapsed_time} seconds")
            elif operation == 'decrypt':
                private_key = input("Enter private key: ").encode()
                result, elapsed_time = measure_execution_time(rsa_decrypt, private_key, data)
                print(f"Decrypted data: {result}\nTime taken: {elapsed_time} seconds")

        elif choice == '3':
            data = input("Enter data to sign: ").encode()
            operation = input("Choose operation (sign or verify): ")

            if operation == 'sign':
                private_key, public_key = generate_rsa_keypair()
                signature, elapsed_time = measure_execution_time(rsa_sign, private_key, data)
                print(f"Signature: {signature}\nTime taken: {elapsed_time} seconds")
            elif operation == 'verify':
                public_key = input("Enter public key: ").encode()
                signature = input("Enter signature: ").encode()
                is_valid, elapsed_time = measure_execution_time(rsa_verify, public_key, data, signature)
                print(f"Signature valid: {is_valid}\nTime taken: {elapsed_time} seconds")

        elif choice == '4':
            data = input("Enter data to hash: ").encode()
            hash_result, elapsed_time = measure_execution_time(sha256_hash, data)
            print(f"SHA-256 Hash: {hash_result}\nTime taken: {elapsed_time} seconds")

        elif choice == '5':
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
