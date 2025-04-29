# Problem: Convert Date to Binary
# Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
class Solution:
    def toBianry(self, n: int) -> int:
        binary: int = 0
        multiplier: int = 1
        while n > 0:
            rem: int = n % 2
            binary += rem * multiplier
            n //= 2
            multiplier *= 10
        return binary

    def convertDateToBinary(self, date: str) -> str:
        yyyy = date.split("-")[0]
        mm = date.split("-")[1]
        dd = date.split("-")[2]
        return (
            str(self.toBianry(int(yyyy)))
            + "-"
            + str(self.toBianry(int(mm)))
            + "-"
            + str(self.toBianry((int(dd))))
        )
