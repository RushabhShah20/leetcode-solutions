# Problem: Longest Unequal Adjacent Groups Subsequence I
# Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
class Solution:
    def getLongestSubsequence(self, words: List[str], groups: List[int]) -> List[str]:
        n: int = len(groups)
        ans: List[str] = []
        ans.append(words[0])
        for i in range(1, n):
            if groups[i] != groups[i - 1]:
                ans.append(words[i])
        return ans
