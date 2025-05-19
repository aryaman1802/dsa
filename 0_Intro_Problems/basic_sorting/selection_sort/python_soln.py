def selection_sort_asc(arr):
    for i in range(0, len(arr)-1):
        min_idx = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_idx]:
                min_idx = j
        if i != min_idx:
            t = arr[i]
            arr[i] = arr[min_idx]
            arr[min_idx] = t


def selection_sort_dsc(arr):
    for i in range(0, len(arr)-1):
        max_idx = i
        for j in range(i+1, len(arr)):
            if arr[j] > arr[max_idx]:
                max_idx = j
        if i != max_idx:
            t = arr[i]
            arr[i] = arr[max_idx]
            arr[max_idx] = t


if __name__ == "__main__":
    arr1 = [13, 46, 24, 52, 20, 9]
    arr2 = [13, 46, 24, 52, 20, 9]
    selection_sort_asc(arr1)
    print(arr1)
    selection_sort_dsc(arr2)
    print(arr2)
