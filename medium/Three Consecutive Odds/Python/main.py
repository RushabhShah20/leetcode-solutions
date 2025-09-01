# Problem: Three Consecutive Odds
# Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        count: int = 0
        for i in range(0, len(arr)):
            if arr[i] % 2 == 0:
                count = 0
            else:
                count += 1
                if count == 3:
                    return True
        return False
