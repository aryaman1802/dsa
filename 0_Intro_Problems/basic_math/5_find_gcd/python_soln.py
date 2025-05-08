def gcd1(n1, n2):
    hcf=1
    for i in range(1, min(n1,n2)+1):
        if (n1%i == 0) and (n2%i == 0):
            hcf = i
    return hcf
    

def gcd2(n1, n2):
    for i in range(min(n1,n2), 0, -1):
        if (n1%i == 0) and (n2%i == 0):
            return i
    return 1


def gcd3(n1, n2):
    t=1
    while (n1 != 0) and (n2 != 0):
        t = max(n1,n2) - min(n1,n2)
        n2 = min(n1,n2)
        n1 = t
    return max(n1,n2)


if __name__ == "__main__":
    n1 = int(input("Enter a number: "))
    n2 = int(input("Enter a number: "))
    print(f"GCD of {n1} and {n2} is (approach 1): {gcd1(n1,n2)}")
    print(f"GCD of {n1} and {n2} is (approach 2): {gcd2(n1,n2)}")
    print(f"GCD of {n1} and {n2} is (approach 3): {gcd3(n1,n2)}")
