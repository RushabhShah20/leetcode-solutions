# Problem: Check if a String Is an Acronym of Words
# Link to the problem: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
class Solution:
    def isAcronym(self, words: List[str], s: str) -> bool:
        ans: str = ""
        for i in range(0, len(words)):
            ans += words[i][0]
        return ans == s
