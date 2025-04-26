# Problem: Replace Elements with Greatest Element on Right Side
# Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        ans: List[int] = list()
        ans.append(-1)
        max: int = -1
        if len(arr) == 1:
            return ans
        else:
            for i in range(len(arr) - 1, 0, -1):
                if max < arr[i]:
                    max = arr[i]
                ans.append(max)
            return list(reversed(ans))
