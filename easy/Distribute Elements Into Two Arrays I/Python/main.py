# Problem: Distribute Elements Into Two Arrays I
# Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
class Solution:
    def reverse(self, arr: List[int], l: int, r: int):
        while l <= r:
            x: int = arr[l]
            arr[l] = arr[r]
            arr[r] = x
            l += 1
            r -= 1

    def resultArray(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        ans: List[int] = [0] * n
        ans[0] = nums[0]
        ans[n - 1] = nums[1]
        l: int = 0
        r: int = n - 1
        for i in range(2, n):
            if ans[l] > ans[r]:
                l += 1
                ans[l] = nums[i]
            else:
                r -= 1
                ans[r] = nums[i]
        self.reverse(ans, r, n - 1)
        return ans
