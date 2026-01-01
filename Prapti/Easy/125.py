class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ss = ""
        for i in s:
            if i.isalnum():
                ss+=i
        
        ss = ss.lower()
        if ss == ss[::-1]:
            return True
        else:
            return False