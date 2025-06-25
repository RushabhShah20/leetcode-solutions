// Problem: Account Balance After Rounded Purchase
// Link to the problem: https://leetcode.com/problems/account-balance-after-rounded-purchase/
class Solution {
  int accountBalanceAfterPurchase(int purchaseAmount) {
    if (purchaseAmount % 10 == 0) {
      return 100 - purchaseAmount;
    } else if (purchaseAmount % 10 < 5) {
      return 100 - ((purchaseAmount) - (purchaseAmount % 10));
    } else {
      return (100 - (purchaseAmount + (10 - (purchaseAmount % 10))));
    }
  }
}
