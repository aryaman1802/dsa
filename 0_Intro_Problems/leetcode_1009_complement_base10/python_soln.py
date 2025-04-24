def bitwiseComplement(n):
    if n==0:
        return 1
    elif n==1:
        return 0
    else:
        num=n
        mask=0
        while num != 0:
            mask = mask << 1
            mask = mask | 1
            num = num >> 1
        ans = (~n)&mask
        return ans
    

# Test cases
print(bitwiseComplement(5))   # Output: 2
print(bitwiseComplement(7))   # Output: 0
print(bitwiseComplement(10))  # Output: 5