# Problem: Smallest Divisible Digit Product I
# Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
class Solution:
    def getProduct(self, n: int) -> int:
        product: int = 1
        while n != 0:
            product *= n % 10
            n //= 10
        return product

    def smallestNumber(self, n: int, t: int) -> int:
        ans: int = n
        for i in range(n, n + (10 - (n % 10)) + 1):
            if self.getProduct(i) % t == 0:
                ans = i
                break
        return ans
