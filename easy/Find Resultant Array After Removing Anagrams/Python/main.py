# Problem: Find Resultant Array After Removing Anagrams
# Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
class Solution:
    def compare(self, str1: str, str2: str) -> bool:
        char1: str = "".join(sorted(str1))
        char2: str = "".join(sorted(str2))
        return char1 == char2

    def removeAnagrams(self, words: List[str]) -> List[str]:
        a: int = 0
        v: List[str] = []
        for i in range(1, len(words)):
            if self.compare(words[a], words[i]):
                words[i] = "1"
            else:
                a = i
        for i in range(0, len(words)):
            if words[i] != "1":
                v.append(words[i])
        return v
