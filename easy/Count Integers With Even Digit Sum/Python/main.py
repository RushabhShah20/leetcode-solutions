# Problem: Count Integers With Even Digit Sum
# Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
class Solution:
    def countEven(self, num: int) -> int:
        count: int = 0
        for i in range(1, num + 1):
            sum: int = 0
            n: int = i
            while n != 0:
                sum += n % 10
                n //= 10
            if sum % 2 == 0:
                count += 1
        return count
