# Problem: Earliest Finish Time for Land and Water Rides I
# Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/
class Solution:
    def solve(
        self, n: int, m: int, a1: List[int], d1: List[int], a2: List[int], d2: List[int]
    ) -> int:
        x = sys.maxsize
        for i in range(0, n):
            x = min(x, a1[i] + d1[i])
        y = sys.maxsize
        for i in range(0, m):
            y = min(y, max(a2[i], x) + d2[i])
        return y

    def earliestFinishTime(
        self,
        landStartTime: List[int],
        landDuration: List[int],
        waterStartTime: List[int],
        waterDuration: List[int],
    ) -> int:
        n = len(landDuration)
        m = len(waterDuration)
        x = self.solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration)
        y = self.solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration)
        ans = min(x, y)
        return ans
