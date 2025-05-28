def insertion_sort_asc(arr):
    for i in range(1, len(arr)):   # left to right
        for j in range(i, 0, -1):   # right to left
            if arr[j] < arr[j-1]:
                t = arr[j]
                arr[j] = arr[j-1]
                arr[j-1] = t
        # print("i:", i, "\tarr:", arr)  # helpful for debugging


def insertion_sort_dsc(arr):
    for i in range(1, len(arr)):   # left to right
        for j in range(i, 0, -1):   # right to left
            if arr[j] > arr[j-1]:
                t = arr[j]
                arr[j] = arr[j-1]
                arr[j-1] = t
        # print("i:", i, "\tarr:", arr)  # helpful for debugging 


if __name__ == "__main__":
    arr1 = [13, 46, 24, 52, 20, 9]
    arr2 = [13, 46, 24, 52, 20, 9]
    insertion_sort_asc(arr1)
    print(arr1)
    insertion_sort_dsc(arr2)
    print(arr2)
