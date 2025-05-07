def isPalindrome1(n):
    if n<0:
        return False
    else:
        num = n
        r = 0
        while n>0:
            r = r*10 + n%10
            n = n//10
        return r == num


def isPalindrome2(n):
    if n<0:
        return False
    n = str(n)
    return n==n[::-1]


def isPalindrome3(n):
    if(n<0 or (n%10==0 and n!=0)):
        return False
    else:
        rev_half = 0
        while n > rev_half:
            rev_half = rev_half*10 + n%10
            n = n//10
        # discard the middle digit for odd-length numbers
        # eg: n=12221 -->  rev_half=122 and updated n is n=12
        # so, n is equal to rev_half//10, which is 12 
        # eg: n=1221  -->  rev_half=12 and updated n is n=12
        # so, n is equal to rev_half
        return (n==rev_half) or (n==rev_half//10)
        

if __name__ == "__main__":
    print(isPalindrome1(121))
    print(isPalindrome1(-121))
    print(isPalindrome1(10))
    print(isPalindrome2(121))
    print(isPalindrome2(-121))
    print(isPalindrome2(10))
    print(isPalindrome3(121))
    print(isPalindrome3(-121))
    print(isPalindrome3(10))
