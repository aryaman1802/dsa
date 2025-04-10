# Brute force solution
def uniqueOccurrences(arr):
    countDict = {}
    for i in arr:
        countDict[i] = countDict.get(i, 0) + 1
    counts = list(countDict.values())
    for j in range(len(counts)):
        for k in range(len(counts)):
            if (counts[j]==counts[k]) and (j!=k):
                return False
    return True
