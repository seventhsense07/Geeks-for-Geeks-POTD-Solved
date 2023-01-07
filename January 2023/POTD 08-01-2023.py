class Solution:
    def countPairs (self, n, arr, k):
        # code here
        d = {}
        count = 0
        for item in arr:
            value = item % k
            if value in d:
                count += d[value]
                d[value] += 1
            else:
                d[value] = 1
        return count
