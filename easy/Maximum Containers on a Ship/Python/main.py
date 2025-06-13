# Problem: Maximum Containers on a Ship
# Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
class Solution:
    def maxContainers(self, n: int, w: int, maxWeight: int) -> int:
        return int(pow(n, 2)) if int(pow(n, 2) * w) <= maxWeight else int(maxWeight // w)
