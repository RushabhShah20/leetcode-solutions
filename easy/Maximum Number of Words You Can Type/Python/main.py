# Problem: Maximum Number of Words You Can Type
# Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        words: List[str] = text.split(" ")
        ans: int = len(words)
        for i in range(0, len(words)):
            for j in range(0, len(brokenLetters)):
                if brokenLetters[j] in words[i]:
                    ans -= 1
                    break
        return ans
