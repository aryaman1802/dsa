def subtractProductAndSum(n):
    pod = 1     # product of digits
    sod = 0     # sum of digits
    while n!= 0:
        d = n % 10    # extract the last digit
        pod *= d
        sod += d
        n = n // 10   # remove the last digit
    return pod - sod


# Test cases
subtractProductAndSum(234)   # Expected output: 15
subtractProductAndSum(4421)  # Expected output: 21