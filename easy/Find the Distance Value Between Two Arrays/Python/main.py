# Problem: Find the Distance Value Between Two Arrays
# Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution:
    def findTheDistanceValue(self, arr1: List[int], arr2: List[int], d: int) -> int:
        n: int = len(arr1)
        m: int = len(arr2)
        ans: int = 0
        for i in range(0, n, 1):
            x: bool = True
            for j in range(0, m, 1):
                if arr1[i] == arr2[j] or abs(arr1[i] - arr2[j]) <= d:
                    x = False
                    break
            if x == True:
                ans += 1
        return ans
