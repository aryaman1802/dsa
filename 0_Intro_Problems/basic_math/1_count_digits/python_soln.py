import math

# brute force approach
def count_digits1(n):
    c = 0
    while n > 0:
        c += 1
        n = n//10
    return c    


# optimal approach
def count_digits2(n):
    c = int(math.log10(n)+1)
    return c


if __name__ == "__main__":
    print(count_digits1(12345))
    print(count_digits2(12345))
    print(count_digits1(7789))
    print(count_digits2(7789))
