def printArr(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

def swapAlternate(arr):
    n = len(arr)
    if n%2 != 0:
        n-=1
    for i in range(0,n,2):
        t = arr[i+1]
        arr[i+1] = arr[i]
        arr[i] = t

if __name__ == '__main__':
    arr1 = [1,2,7,8,5]
    arr2 = [1,2,3,4,5,6]
    swapAlternate(arr1)
    printArr(arr1)
    swapAlternate(arr2)
    printArr(arr2)
