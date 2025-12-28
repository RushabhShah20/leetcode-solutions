# Problem: Smallest All-Ones Multiple
# Link to the problem: https://leetcode.com/problems/smallest-all-ones-multiple/
class Solution:
    def minAllOneMultiple(self, k: int) -> int:
        if k % 2 == 0 or k % 5 == 0:
            return -1
        if k == 1:
            return 1
        rem: int = 1
        ans: int = 1
        while rem > 0:
            rem = ((rem * 10) + 1) % k
            ans += 1
            if ans > k:
                return -1
        return ans
