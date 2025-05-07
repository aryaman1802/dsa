def is_armstrong(n):
    s=0
    num=n
    while n!=0:
        r = n%10
        s += (r*r*r)
        n = n//10
    return s==num


if __name__ == "__main__":
    print(is_armstrong(153))
    print(is_armstrong(371))
