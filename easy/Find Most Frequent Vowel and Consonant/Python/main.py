# Problem: Find Most Frequent Vowel And Consonant
# Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels: dict[str, int] = {}
        consonents: dict[str, int] = {}
        for char in s:
            if char in "aeiou":
                vowels[char] = vowels.get(char, 0) + 1
            else:
                consonents[char] = consonents.get(char, 0) + 1
        maxVowels: int = max(vowels.values()) if vowels else 0
        maxConsonents: int = max(consonents.values()) if consonents else 0
        return maxVowels + maxConsonents
