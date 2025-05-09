def recursion_demo1(n):
    if n<=0:
        return
    print("Aryaman", n)
    recursion_demo1(n-1)
    print("after recursion_demo(n-1)", n)


def recursion_demo2(i,n):
    if i > n:
        return
    else:
        print(i, end=" ")
        recursion_demo2(i+1,n)


def recursion_demo3(n):
    if n <= 0:
        return
    else:
        recursion_demo3(n-1)
        print(n, end=" ")


if __name__ == "__main__":
    num = int(input("Enter a number: ")) 
    # recursion_demo1(num)
    # recursion_demo2(1,num)
    recursion_demo3(num)
    print()