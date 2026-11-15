# Problem: Number of Sub-arrays With Odd Sum
# Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
class Solution:
    def numOfSubarrays(self, arr: list[int]) -> int:
        n: int = len(arr)
        ans: int = 0
        x: int = 0
        y: int = 1
        z: int = 0
        for i in range(0, n):
            m: int = 1000000007
            z += arr[i]
            if z & 1:
                ans = (ans + y) % m
                x += 1
            else:
                ans = (ans + x) % m
                y += 1
        return ans
