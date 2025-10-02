# Problem: Water Bottles II
# Link to the problem: https://leetcode.com/problems/water-bottles-ii/
class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        ans: int = 0
        emptyBottles: int = 0
        while True:
            if numBottles > 0:
                ans += numBottles
                emptyBottles += numBottles
                numBottles = 0
            while emptyBottles >= numExchange:
                numBottles += 1
                emptyBottles -= numExchange
                numExchange += 1
            if numBottles == 0:
                return ans
