# Problem: Count the Number of Computer Unlocking Permutations
# Link to the problem: https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations/
class Solution:
    def countPermutations(self, complexity: List[int]) -> int:
        n: int = len(complexity)
        ans: int = 1
        mod: int = 1000000007
        for i in range(1, n):
            if complexity[i] <= complexity[0]:
                return 0
            else:
                ans = (ans * i) % mod
        return ans
