#-----------------------Description--------------------------
# A website domain like "discuss.leetcode.com" consists of various subdomains. At the top level, we have "com", at the next level, we have "leetcode.com", and at the lowest level, "discuss.leetcode.com". When we visit a domain like "discuss.leetcode.com", we will also visit the parent domains "leetcode.com" and "com" implicitly.

# Now, call a "count-paired domain" to be a count (representing the number of visits this domain received), followed by a space, followed by the address. An example of a count-paired domain might be "9001 discuss.leetcode.com".


# We are given a list cpdomains of count-paired domains. We would like a list of count-paired domains, (in the same format as the input, and in any order), that explicitly counts the number of visits to each subdomain.
#-----------------------Result-------------------------------
# Runtime: 48 ms, faster than 96.27% of Python3 online submissions for Subdomain Visit Count.
# Memory Usage: 13.8 MB, less than 77.04% of Python3 online submissions for Subdomain Visit Count.
class Solution:
    def subdomainVisits(self, cpdomains):
        mydict = {}
        for str in cpdomains:
            time, domains = str.split(' ')
            domainlist = domains.split('.')
            i = len(domainlist) - 1
            while i >= 0:
                tmpkey = ".".join(domainlist[i:])
                if tmpkey not in mydict:
                    mydict[tmpkey] = int(time)
                else:
                    mydict[tmpkey] += int(time)
                i -= 1

        rlist = ["{} {}".format(mydict[entry], entry) for entry in mydict]
        return rlist


#point1:using collections
