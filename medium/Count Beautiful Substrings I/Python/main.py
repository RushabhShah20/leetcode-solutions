# Problem: Count Beautiful Substrings I
# Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
class Solution:
    def beautifulSubstrings(self, s: str, k: int) -> int:
        ans: int = 0
        n: int = len(s)
        for i in range(0, n):
            vowels: int = 0
            consonents: int = 0
            for j in range(i, n):
                if (
                    s[j] == "a"
                    or s[j] == "e"
                    or s[j] == "i"
                    or s[j] == "o"
                    or s[j] == "u"
                ):
                    vowels += 1
                else:
                    consonents += 1
                if (vowels == consonents) and (vowels * consonents) % k == 0:
                    ans += 1
        return ans
