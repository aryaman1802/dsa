# iterative approach
# time complexity = O(n)
# space complexity = O(1)
def get_factorial1(n):
    if n<0:
        return -1      # factorial exists for non-negative numbers
    elif n==0:
        return 1
    else:
        fac = 1
        for i in range(1,n+1):
            fac *= i
        return fac
    

# recursive approach
# time complexity = O(n)
# space complexity = O(1)
def get_factorial2(n):
    if (n==0) or (n==1):
        # base case
        return 1
    else:
        return n*get_factorial2(n-1)
    

if __name__ == "__main__":
    n = int(input("Enter number: "))
    print(f"Factorial of {n}:")
    print(f"Approach 1: {get_factorial1(n)}")
    print(f"Approach 2: {get_factorial2(n)}")
