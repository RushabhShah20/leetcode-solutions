# Problem: Binary Prefix Divisible By 5
# Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        ans: List[bool] = []
        rem: int = 0
        for num in nums:
            rem = (2 * rem + num) % 5
            if rem == 0:
                ans.append(True)
            else:
                ans.append(False)
        return ans
