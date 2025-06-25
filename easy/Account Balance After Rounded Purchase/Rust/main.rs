// Problem: Account Balance After Rounded Purchase
// Link to the problem: https://leetcode.com/problems/account-balance-after-rounded-purchase/
impl Solution {
    pub fn account_balance_after_purchase(purchase_amount: i32) -> i32 {
        if (purchase_amount % 10 == 0) {
            return 100 - purchase_amount;
        } else if (purchase_amount % 10 < 5) {
            return 100 - ((purchase_amount) - (purchase_amount % 10));
        } else {
            return (100 - (purchase_amount + (10 - (purchase_amount % 10))));
        }
    }
}
