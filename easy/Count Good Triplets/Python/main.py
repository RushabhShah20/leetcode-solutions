# Problem: Count Good Triplets
# Link to the problem: https://leetcode.com/problems/count-good-triplets/
class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        n: int = len(arr)
        ans: int = 0
        for i in range(0, n - 2):
            for j in range(i + 1, n - 1):
                for k in range(j + 1, n):
                    if abs(arr[i] - arr[j]) > a:
                        continue
                    if abs(arr[j] - arr[k]) > b:
                        continue
                    if abs(arr[i] - arr[k]) > c:
                        continue
                    ans += 1
        return ans
