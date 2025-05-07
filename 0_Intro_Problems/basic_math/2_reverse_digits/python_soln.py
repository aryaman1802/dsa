def rev_num(n):
    r = 0
    sign_flag = True if n<0 else False
    n = abs(n)
    while n>0:
        r = r*10 + n%10
        n = n//10
    if sign_flag:
        r *= -1
    return r


if __name__ == "__main__":
    print(rev_num(123))
    print(rev_num(-123))
    print(rev_num(120))
    