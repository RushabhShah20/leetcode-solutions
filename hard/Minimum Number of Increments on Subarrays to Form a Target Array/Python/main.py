# Problem: Minimum Number of Increments on Subarrays to Form a Target Array
# Link to the problem: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
class Solution:
    def minNumberOperations(self, target: List[int]) -> int:
        n: int = len(target)
        ans: int = target[0]
        for i in range(1, n):
            if target[i] > target[i - 1]:
                ans += target[i] - target[i - 1]
        return ans
