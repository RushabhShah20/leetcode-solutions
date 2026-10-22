# Problem: Minimum Operations to Sort a Permutation
# Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        n: int = len(nums)
        if n == 1:
            return 0
        j: int = 0
        while nums[j] != 0:
            j += 1
        x: bool = True
        y: bool = True
        for i in range(1, n):
            z: int = nums[(i + j) % n]
            if z != i:
                x = False
            if z != n - i:
                y = False
            if not x and not y:
                return -1
        if x:
            return min(j, n - j + 2)
        return min(n - j, j + 2)
