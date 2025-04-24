def getUnique1(arr):
    for i in range(len(arr)):
        flag = False
        for j in range(len(arr)):
            if (i!=j) and (arr[i] == arr[j]):
                flag = True
        if flag == False:
            return arr[i]
    return -42

def getUnique2(arr):
    ans = 0
    for i in range(len(arr)):
        ans = (ans^arr[i])
    return ans

if __name__ == "__main__":
    arr1 = [2,3,1,6,3,6,2]
    arr2 = [2,4,7,2,7]
    print(getUnique1(arr1))
    print(getUnique1(arr2))
    print(getUnique2(arr1))
    print(getUnique2(arr2))

