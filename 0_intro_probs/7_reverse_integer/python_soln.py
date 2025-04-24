def reverse_int(x):
    rev = 0
    if x >= 0:
        sign = 1
    elif x < 0:
        sign = -1
    x = abs(x)
    while x != 0:
        digit = x%10
        rev = rev*10 + digit
        x = x//10
    rev = rev*sign
    int_max = (2**31) - 1
    int_min = -(2**31)
    if (rev > int_max) or (rev < int_min):
        return 0
    else:
        return rev
    

# Test cases
print(reverse_int(123))  # Expected output: 321
print(reverse_int(-123)) # Expected output: -321
print(reverse_int(120))  # Expected output: 21