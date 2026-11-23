# Problem: Product of the Last K Numbers
# Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers:
    def __init__(self):
        self.a: List[int] = [1]
        self.n: int = 0

    def add(self, num: int) -> None:
        if num == 0:
            self.a = [1]
            self.n = 0
        else:
            self.a.append(self.a[self.n] * num)
            self.n += 1

    def getProduct(self, k: int) -> int:
        ans: int = 0 if k > self.n else self.a[self.n] // self.a[self.n - k]
        return ans


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)
