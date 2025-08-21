# Problem: Watering Plants
# Link to the problem: https://leetcode.com/problems/watering-plants/
class Solution:
    def wateringPlants(self, plants: List[int], capacity: int) -> int:
        ans: int = 0
        x: int = capacity
        for i in range(0, len(plants)):
            if plants[i] <= capacity:
                ans += 1
                capacity -= plants[i]
            else:
                ans += (2 * (i)) + 1
                capacity = x
                capacity -= plants[i]
        return ans
