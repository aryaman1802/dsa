def bubble_sort_asc1(arr):
    swap_done = True
    while swap_done:
        swap_done = False
        for i in range(1, len(arr)):
            if arr[i-1] > arr[i]:
                t = arr[i-1]
                arr[i-1] = arr[i]
                arr[i] = t
                swap_done = True


def bubble_sort_dsc1(arr):
    swap_done = True
    while swap_done:
        swap_done = False
        for i in range(1, len(arr)):
            if arr[i-1] < arr[i]:
                t = arr[i-1]
                arr[i-1] = arr[i]
                arr[i] = t
                swap_done = True


def bubble_sort_asc2(arr):
    for i in range(1, len(arr)):
        for j in range(0, len(arr)-1):
            if arr[j] > arr[j+1]:
                t = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = t 


def bubble_sort_dsc2(arr):
    for i in range(1, len(arr)):
        for j in range(0, len(arr)-1):
            if arr[j] < arr[j+1]:
                t = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = t


if __name__ == "__main__":
    arr1 = [13, 46, 24, 52, 20, 9]
    arr2 = [13, 46, 24, 52, 20, 9]
    arr3 = [13, 46, 24, 52, 20, 9]
    arr4 = [13, 46, 24, 52, 20, 9]
    bubble_sort_asc1(arr1)
    print(arr1)
    bubble_sort_dsc1(arr2)
    print(arr2)
    bubble_sort_asc2(arr3)
    print(arr3)
    bubble_sort_dsc2(arr4)
    print(arr4)
