# iterative approach
# time complexity = O(n)
# space complexity = O(1)
def get_sum1(n):
    s=0
    for i in range(1,n+1):
        s += i
    return s


# recursive approach
# time complexity = O(n)
# space complexity = O(1)
def get_sum2(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return n + get_sum2(n-1)
    

# optimal approach: discovered by Gauss
# sum(n) = (n*(n+1))/2, where n is natural number
# time complexity = O(1)
# space complexity = O(1)
def get_sum3(n):
    return int((n*(n+1))/2)


if __name__ == "__main__":
    n = int(input("Enter a number: "))
    print(f"Sum from 1 to {n}:")
    print("Approach 1:", get_sum1(n))
    print("Approach 2:", get_sum2(n))
    print("Approach 3:", get_sum3(n))
