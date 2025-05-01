def getDuplicate1(arr):
    flag = False
    for i in range(len(arr)):
        flag = False
        for j in range(len(arr)):
            if (i!=j) and (arr[i]==arr[j]):
                flag = True
        if flag:
            return arr[i]
    return -42

def getDuplicate2(arr):
    ans = 0
    for i in range(len(arr)):
        ans = ans^arr[i]
    for i in range(1, len(arr)):
        ans = ans^i
    return ans

if __name__ == "__main__":
    arr1 = [4,2,1,3,1]
    arr2 = [6,3,1,5,4,3,2]
    print(getDuplicate1(arr1))
    print(getDuplicate1(arr2))
    print(getDuplicate2(arr1))
    print(getDuplicate2(arr2))
