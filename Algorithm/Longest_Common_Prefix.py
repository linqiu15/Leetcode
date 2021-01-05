class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if strs==[]:
            return ''
        len_str = [len(string) for string in strs]
        minlen, i = min(len_str), 0
        while i <= minlen:
            comp = strs[0][0:i]
            if all([string1[0:i] == comp for string1 in strs]):
                i += 1
            else:
                i-=1
                break
        if i>minlen:
            return strs[0][0:i-1]
        else:
            return strs[0][0:i]
