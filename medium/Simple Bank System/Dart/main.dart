// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
class Bank {
  List<int> ans = new List.empty(growable: true);
  Bank(List<int> balance) {
    this.ans = balance;
  }

  bool transfer(int account1, int account2, int money) {
    if ((account1 > ans.length || account1 < 0) ||
        (account2 > ans.length || account2 < 0)) {
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

  bool deposit(int account, int money) {
    if (account > ans.length || account < 0) {
      return false;
    } else {
      ans[account - 1] += money;
      return true;
    }
  }

  bool withdraw(int account, int money) {
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
 * Bank obj = Bank(balance);
 * bool param1 = obj.transfer(account1,account2,money);
 * bool param2 = obj.deposit(account,money);
 * bool param3 = obj.withdraw(account,money);
 */
