import matplotlib.pyplot as plt

def plot_execution_times(times, labels, title):
    plt.figure(figsize=(10, 6))
    plt.bar(labels, times, color='skyblue')
    plt.xlabel('Operation')
    plt.ylabel('Time (seconds)')
    plt.title(title)
    plt.show()

# Example data for plotting
aes_times = [0.02, 0.04, 0.06, 0.08, 0.1]
rsa_times = [0.1, 0.2, 0.3, 0.4, 0.5]
labels = ['16 bits', '32 bits', '64 bits', '128 bits', '256 bits']

# plot_execution_times(aes_times, labels, 'AES Encryption Time for Different Key Lengths')
plot_execution_times(rsa_times, labels, 'RSA Encryption Time for Different Key Lengths')
