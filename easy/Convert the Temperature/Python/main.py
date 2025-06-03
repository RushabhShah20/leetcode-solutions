# Problem: Convert the Temperature
# Link to the problem: https://leetcode.com/problems/convert-the-temperature/
class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        ans: List[float] = [0] * 2
        ans[0] = celsius + 273.15
        ans[1] = (celsius * 1.8) + 32
        return ans
