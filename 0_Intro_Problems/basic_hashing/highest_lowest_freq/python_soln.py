def high_low_freq(arr):
    freq = {}
    for i in arr:
        freq[i] = freq.get(i,0)+1
    freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)
    return freq

def display_freq(freq):
    print(f"Number: {freq[0][0]}\t\tFrequency: {freq[0][1]}")
    print(f"Number: {freq[-1][0]}\t\tFrequency: {freq[-1][1]}")

if __name__ == "__main__":
    arr1 = [10,5,10,15,10,5]
    arr2 = [2,2,3,4,4,2]
    print("arr1:")
    display_freq(high_low_freq(arr1))
    print("arr2:")
    display_freq(high_low_freq(arr2))
