def display_freq(fc):
    for k,v in fc.items():
        print(f"Key: {k}\t\tValue: {v}")
        
def get_freq1(arr):
    freq_counter = {}
    for i in arr:
        freq_counter[i] = freq_counter.get(i,0)+1
    return freq_counter

if __name__ == "__main__":
    arr1 = [10,5,10,15,10,5]
    arr2 = [2,2,3,4,4,2]
    print("arr1:")
    display_freq(get_freq1(arr1))
    print("arr2:")
    display_freq(get_freq1(arr2))
