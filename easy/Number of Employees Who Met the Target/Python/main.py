# Problem: Number of Employees Who Met the Target
# Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        ans: int = 0
        for hour in hours:
            if hour >= target:
                ans += 1
        return ans
