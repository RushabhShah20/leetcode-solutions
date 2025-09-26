# Problem: Positions of Large Groups
# Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        ans: List[List[int]] = []
        count: int = 1
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                count += 1
            else:
                if count >= 3:
                    ans.append([i - count, i - 1])
                count = 1
        if count >= 3:
            ans.append([(int)(len(s) - count), (int)(len(s) - 1)])
        return ans
