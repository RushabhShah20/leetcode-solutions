# Problem: Alternating Groups I
# Link to the problem: https://leetcode.com/problems/alternating-groups-i/
class Solution:
    def numberOfAlternatingGroups(self, colors: List[int]) -> int:
        ans: int = 0
        for i in range(1, len(colors) - 1):
            if colors[i] != colors[i - 1] and colors[i] != colors[i + 1]:
                ans += 1
        if colors[0] != colors[1] and colors[0] != colors[len(colors) - 1]:
            ans += 1
        if (
            colors[len(colors) - 1] != colors[len(colors) - 2]
            and colors[len(colors) - 1] != colors[0]
        ):
            ans += 1
        return ans
