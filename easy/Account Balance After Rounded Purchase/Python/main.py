# Problem: Account Balance After Rounded Purchase
# Link to the problem: https://leetcode.com/problems/account-balance-after-rounded-purchase/
class Solution:
    def accountBalanceAfterPurchase(self, purchaseAmount: int) -> int:
        if purchaseAmount % 10 == 0:
            return 100 - purchaseAmount
        elif purchaseAmount % 10 < 5:
            return 100 - ((purchaseAmount) - (purchaseAmount % 10))
        else:
            return 100 - (purchaseAmount + (10 - (purchaseAmount % 10)))
