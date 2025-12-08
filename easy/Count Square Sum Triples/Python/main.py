# Problem: Count Square Sum Triples
# Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
class Solution:
    def countTriples(self, n: int) -> int:
        ans: int = 0
        for i in range(1, n + 1):
            x: int = i * i
            l: int = 1
            r: int = i - 1
            while l < r:
                sum: int = l * l + r * r
                if sum == x:
                    ans += 2
                    l += 1
                    r -= 1
                elif sum < x:
                    l += 1
                else:
                    r -= 1
        return ans
