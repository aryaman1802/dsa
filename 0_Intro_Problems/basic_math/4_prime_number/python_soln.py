import math

def isPrime1(n):
    for i in range(2,n):
        if n%i == 0:
            return False
    return True


def isPrime2(n):
    sqrt_n = int(math.sqrt(n))
    for i in range(2,sqrt_n+1):
        if n%i == 0:
            return False
    return True


if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print("Is 143 a prime number:", isPrime1(143))
    print("Is 143 a prime number:", isPrime2(143))
    print("Is 2 a prime number:", isPrime1(2))
    print("Is 2 a prime number:", isPrime2(2))
    print(f"Is {num} a prime number: {isPrime1(num)}")
    print(f"Is {num} a prime number: {isPrime2(num)}")
