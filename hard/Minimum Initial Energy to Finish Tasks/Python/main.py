# Problem: Minimum Initial Energy to Finish Tasks
# Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
class Solution:
    def minimumEffort(self, tasks: List[List[int]]) -> int:
        tasks.sort(key=lambda task: task[1] - task[0])
        ans: int = 0
        for task in tasks:
            ans = max(ans + task[0], task[1])
        return ans
