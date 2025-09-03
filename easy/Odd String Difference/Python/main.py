# Problem: Odd String Difference
# Link to the problem: https://leetcode.com/problems/odd-string-difference/
class Solution:
    def oddString(self, words: List[str]) -> str:
        m: int = len(words)
        n: int = len(words[0])
        ans: str = ""
        diff: List[List[int]] = [[0] * (len(words[0]) - 1) for _ in range(len(words))]
        for i in range(0, m):
            for j in range(0, n - 1):
                diff[i][j] = ord(words[i][j + 1]) - ord(words[i][j])
        if diff[1] == diff[2]:
            if diff[0] != diff[1] and diff[0] != diff[2]:
                return words[0]
        for i in range(1, len(diff) - 1):
            if diff[i - 1] == diff[i + 1]:
                if diff[i] != diff[i - 1] and diff[i] != diff[i + 1]:
                    return words[i]
        if diff[m - 3] == diff[m - 2]:
            if diff[m - 1] != diff[m - 2] and diff[m - 1] != diff[m - 3]:
                return words[m - 1]
        return ans
