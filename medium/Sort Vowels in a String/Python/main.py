# Problem: Sort Vowels in a String
# Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
class Solution:
    def sortVowels(self, s: str) -> str:
        indices: List[int] = []
        alphabets: List[str] = []
        for i in range(0, len(s)):
            if (
                s[i] == "a"
                or s[i] == "e"
                or s[i] == "i"
                or s[i] == "o"
                or s[i] == "u"
                or s[i] == "A"
                or s[i] == "E"
                or s[i] == "I"
                or s[i] == "O"
                or s[i] == "U"
            ):
                indices.append(i)
                alphabets.append(s[i])
        alphabets.sort()
        t: List[str] = list(s)
        for i in range(0, len(indices)):
            t[indices[i]] = alphabets[i]
        return "".join(t)
