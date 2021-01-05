class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        mag = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        lens = len(s)
        rnum, i = 0, 0
        if lens == 1:
            return mag[s]
        while i < lens - 1:
            if mag[s[i]] >= mag[s[i + 1]]:
                rnum += mag[s[i]]
                i += 1
            else:
                rnum += mag[s[i + 1]] - mag[s[i]]
                i += 2
        if i == lens - 1:
            return rnum + mag[s[i]]
        else:
            return rnum
