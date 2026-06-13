# Problem: Weighted Word Mapping
# Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        ans: List[str] = []
        for word in words:
            total = sum(weights[ord(ch) - ord("a")] for ch in word)
            ans.append(chr(ord("z") - (total % 26)))
        return "".join(ans)
