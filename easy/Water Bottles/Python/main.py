# Problem: Water Bottles
# Link to the problem: https://leetcode.com/problems/water-bottles/
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        ans: int = numBottles
        while numBottles >= numExchange:
            x: int = numBottles // numExchange
            y: int = numBottles % numExchange
            numBottles = x + y
            ans += x
        return ans
