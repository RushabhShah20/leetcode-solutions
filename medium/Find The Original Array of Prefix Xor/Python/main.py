# Problem: Find The Original Array of Prefix Xor
# Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        ans: List[int] = [0] * len(pref)
        ans[0] = pref[0]
        for i in range(1, len(pref), 1):
            ans[i] = pref[i] ^ pref[i - 1]
        return ans
