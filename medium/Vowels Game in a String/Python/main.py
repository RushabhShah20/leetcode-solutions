# Problem: Vowels Game in a String
# Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
class Solution:
    def doesAliceWin(self, s: str) -> bool:
        for i in range(0, len(s)):
            if s[i] == "a" or s[i] == "e" or s[i] == "i" or s[i] == "o" or s[i] == "u":
                return True
        return False
