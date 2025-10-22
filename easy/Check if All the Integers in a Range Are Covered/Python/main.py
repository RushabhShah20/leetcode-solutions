# Problem: Check if All the Integers in a Range Are Covered
# Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
class Solution:
    def isCovered(self, ranges: List[List[int]], left: int, right: int) -> bool:
        covered: List[bool] = [False] * 51
        for i in ranges:
            for j in range(i[0], i[1] + 1):
                covered[j] = True
        for i in range(left, right + 1):
            if covered[i] == False:
                return False
        return True
