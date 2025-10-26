// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
class Bank {
    long[] ans;

    public Bank(long[] balance) {
        ans = balance;
    }

    public boolean transfer(int account1, int account2, long money) {
        if ((account1 > ans.length || account1 < 0) || (account2 > ans.length || account2 < 0)) {
            return false;
        } else {
            if (ans[account1 - 1] < money) {
                return false;
            } else {
                ans[account1 - 1] -= money;
                ans[account2 - 1] += money;
                return true;
            }
        }
    }

    public boolean deposit(int account, long money) {
        if (account > ans.length || account < 0) {
            return false;
        } else {
            ans[account - 1] += money;
            return true;
        }
    }

    public boolean withdraw(int account, long money) {
        if (account > ans.length || account < 0) {
            return false;
        } else {
            if (ans[account - 1] < money) {
                return false;
            } else {
                ans[account - 1] -= money;
                return true;
            }
        }
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * Bank obj = new Bank(balance);
 * boolean param_1 = obj.transfer(account1,account2,money);
 * boolean param_2 = obj.deposit(account,money);
 * boolean param_3 = obj.withdraw(account,money);
 */