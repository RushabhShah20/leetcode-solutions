# Problem: Type of Triangle
# Link to the problem: https://leetcode.com/problems/type-of-triangle/
class Solution:
    def triangleType(self, nums: List[int]) -> str:
        a: int = nums[0]
        b: int = nums[1]
        c: int = nums[2]
        if a + b > c and b + c > a and c + a > b:
            if a == b and b == c and c == a:
                return "equilateral"
            elif a == b or b == c or c == a:
                return "isosceles"
            else:
                return "scalene"
        return "none"
