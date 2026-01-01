class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x >= 0:
            sign = +1
        else:
            sign = -1

        d = str(abs(x))
        c = d[::-1]
        e = sign * int(c)

        if e < -2**31 or e > 2**31 - 1:
            return 0

        return e