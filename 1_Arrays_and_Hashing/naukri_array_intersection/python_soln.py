# brute force
def findArrayIntersection1(arr, n, brr, m):
    common = []
    for i in range(n):
        for j in range(m):
            if arr[i] == brr[j]:
                common.append(arr[i])
                arr[i] = float("-inf")
                brr[j] = float("-inf")
    if common == []:
        return -1
    else:
        return common


# def findArrayIntersection2(arr, n, brr, m):
#     common = []
#     c = 0
#     if m < n:
#         big, small = arr, brr
#     else:
#         big, small = brr, arr
#     for i in range(len(big)):
#         if 
#         if big[i] == small[c]:
#             common.append(big[i])
#             c += 1
#     if len(common) == 0:
#         return -1
#     else:
#         return common


if __name__ == "__main__":
    arr1 = [1,2,2,2,3,4]
    arr2 = [2,2,3,3]
    arr3 = [1,2,3]
    arr4 = [3,4]
    arr5 = [1,4,5]
    arr6 = [3,4,5]
    arr7 = [3]
    arr8 = [6]
    print()
    print(findArrayIntersection1(arr1, len(arr1), arr2, len(arr2)))
    print(findArrayIntersection1(arr3, len(arr3), arr4, len(arr4)))
    print(findArrayIntersection1(arr5, len(arr5), arr6, len(arr6)))
    print(findArrayIntersection1(arr7, len(arr7), arr8, len(arr8)))
    # print(findArrayIntersection2(arr1, len(arr1), arr2, len(arr2)))
    # print(findArrayIntersection2(arr3, len(arr3), arr4, len(arr4)))
    # print(findArrayIntersection2(arr5, len(arr5), arr6, len(arr6)))
    # print(findArrayIntersection2(arr7, len(arr7), arr8, len(arr8)))
    # print(findArrayIntersection3(arr1, len(arr1), arr2, len(arr2)))
    # print(findArrayIntersection3(arr3, len(arr3), arr4, len(arr4)))
    # print(findArrayIntersection3(arr5, len(arr5), arr6, len(arr6)))
    # print(findArrayIntersection3(arr7, len(arr7), arr8, len(arr8)))
    
