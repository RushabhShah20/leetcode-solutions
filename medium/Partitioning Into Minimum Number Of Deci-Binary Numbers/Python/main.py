# Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
# Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution:
    def minPartitions(self, n: str) -> int:
        ans: int = 0
        for c in n:
            ans = max(ans, ord(c) - ord("0"))
        return ans
