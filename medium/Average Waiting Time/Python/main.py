# Problem: Average Waiting Time
# Link to the problem: https://leetcode.com/problems/average-waiting-time/
class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        ans: int = 0
        total: int = 0
        n: int = len(customers)
        total += customers[0][0] + customers[0][1]
        ans += customers[0][1]
        for i in range(1, n):
            if total >= customers[i][0]:
                total += customers[i][1]
                ans += total - customers[i][0]
            else:
                total = customers[i][0] + customers[i][1]
                ans += customers[i][1]
        return (float)(ans) / (float)(n)
