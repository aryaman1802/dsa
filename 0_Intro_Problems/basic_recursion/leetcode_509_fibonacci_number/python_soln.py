# recursion
def fib1(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fib1(n-1) + fib1(n-2)
    

# fastest (iterative version is faster than its recursive counterpart)
def fib2(n):
    a, b = 0, 1
    c = a+b
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        for i in range(2,n+1):
            c = a+b
            a = b
            b = c
        return c
    

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    print(fib1(n))
    print(fib2(n))
