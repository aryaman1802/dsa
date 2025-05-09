def rev_arr1(arr, left, right):
    if left >= right:
        return
    else:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
        rev_arr1(arr, left, right)
    

def rev_arr2(arr, i, n):
    if i >= n//2:
        return
    else:
        arr[i], arr[n-i-1] = arr[n-i-1], arr[i]
        i += 1
        rev_arr2(arr, i, n)


if __name__ == "__main__":
    arr1 = [1,3,2,5,4]
    arr2 = [5,8,7,9]
    rev_arr1(arr1, 0, len(arr1)-1)
    print(arr1)
    rev_arr1(arr2, 0, len(arr2)-1)
    print(arr2)
    arr1 = [1,3,2,5,4]
    arr2 = [5,8,7,9]
    rev_arr2(arr1, 0, len(arr1))
    print(arr1)
    rev_arr2(arr2, 0, len(arr2))
    print(arr2)
    