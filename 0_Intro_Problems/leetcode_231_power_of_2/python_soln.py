def isPowerOfTwo(n):
    x=0
    while 2**x < n:
        x+=1
    return (2**x) == n
    

# Test cases
print(isPowerOfTwo(1))
print(isPowerOfTwo(16))
print(isPowerOfTwo(3))
print(isPowerOfTwo(6))
print(isPowerOfTwo(-16))