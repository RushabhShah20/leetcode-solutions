# Problem: Add to Array-Form of Integer
# Link to the problem: https://leetcode.com/problems/add-to-array-form-of-integer/
class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        ans: List[int] = []
        for i in range(len(num) - 1, -1, -1):
            ans.insert(0, (num[i] + k) % 10)
            k = (num[i] + k) // 10
        while k > 0:
            ans.insert(0, k % 10)
            k //= 10
        return ans
