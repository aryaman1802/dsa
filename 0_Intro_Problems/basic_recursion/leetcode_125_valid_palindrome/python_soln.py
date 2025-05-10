# 2nd fastest
def isPalindrome1(s):
    s1 = ""
    s = s.lower()
    for i in s:
        if i.isalnum():
            s1 += i
    s2 = s1[::-1]
    return s1==s2


# fastest
def isPalindrome2(s):
    s1 = ""
    s = s.lower()
    for i in s:
        if i.isalnum():
            s1 += i
    l1 = len(s1)
    for i in range(l1//2):
        if s1[i] != s1[l1-1-i]:
            return False
    return True


def process_string(s):
    s1 = ""
    s = s.lower()
    for i in s:
        if i.isalnum():
            s1 += i
    return s1


# recursion
def isPalindrome3(i,s,n):
    if i >= n//2:
        return True
    else:
        if s[i] != s[n-1-i]:
            return False
        return isPalindrome3(i+1,s,n)


if __name__ == "__main__":
    s1 = "A man, a plan, a canal: Panama"
    s2 = "race a car"
    s3 = " "
    print(isPalindrome1(s1))
    print(isPalindrome1(s2))
    print(isPalindrome1(s3))
    print(isPalindrome2(s1))
    print(isPalindrome2(s2))
    print(isPalindrome2(s3))
    print(isPalindrome3(0,process_string(s1),len(process_string(s1))))
    print(isPalindrome3(0,process_string(s2),len(process_string(s2))))
    print(isPalindrome3(0,process_string(s3),len(process_string(s3))))


