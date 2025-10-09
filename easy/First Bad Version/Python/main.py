# Problem: First Bad Version
# Link to the problem: https://leetcode.com/problems/first-bad-version/
# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:


class Solution:
    def firstBadVersion(self, n: int) -> int:
        l: int = 1
        r: int = n
        while l < r:
            m: int = l + (r - l) // 2
            if isBadVersion(m):
                r = m
            else:
                l = m + 1
        return l
