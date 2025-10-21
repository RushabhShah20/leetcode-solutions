# Problem: Sort Array By Parity
# Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        ans: List[int] = []
        even: List[int] = []
        odd: List[int] = []
        for num in nums:
            if num % 2 == 0:
                even.append(num)
            else:
                odd.append(num)
        for num in even:
            ans.append(num)
        for num in odd:
            ans.append(num)
        return ans
