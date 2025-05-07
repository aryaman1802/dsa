def rev_num(n):
    r = 0
    sign = -1 if n<0 else 1
    n = abs(n)
    while n>0:
        r = r*10 + n%10
        n = n//10
    r *= sign
    int_max = (2**31) - 1
    int_min = -(2**31)
    if (r > int_max) or (r < int_min):
        return 0
    else:
        return r


if __name__ == "__main__":
    print(rev_num(123))
    print(rev_num(-123))
    print(rev_num(120))
    