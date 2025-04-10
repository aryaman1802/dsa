# Solution 1 (replicating C++'s solution)
def hammingWeight(n):
    count = 0
    while n != 0:
        if n & 1:
            count += 1
        n >>= 1
    return count



# Solution 2 (better version)
def hammingWeight2(n):
    ans = 0
    while n != 0:
        ans += n%2
        n//=2
    return ans


# Test cases
print(hammingWeight(11))
print(hammingWeight(128))
print(hammingWeight(2147483645))