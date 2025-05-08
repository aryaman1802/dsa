import math

# brute force approach
def get_all_divisors1(n):
    div = []
    for i in range(1,n+1):
        if n%i == 0:
            div.append(i)
    return div


# optimal approach
def get_all_divisors2(n):
    div = []
    sqrtn = int(math.sqrt(n))
    for i in range(1,sqrtn+1):
        if n%i == 0:
            div.append(i)
            f = n//i
            if ((n%f == 0) and (f != i)):
                div.append(f)
    div = sorted(div)
    return div


if __name__ == "__main__":
    print(get_all_divisors1(36))
    print(get_all_divisors2(36))
