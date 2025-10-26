// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
/**
 * @param {number[]} balance
 */
var Bank = function (balance) {
    this.ans = balance;
};

/** 
 * @param {number} account1 
 * @param {number} account2 
 * @param {number} money
 * @return {boolean}
 */
Bank.prototype.transfer = function (account1, account2, money) {
    if ((account1 > this.ans.length || account1 < 0) || (account2 > this.ans.length || account2 < 0)) {
        return false;
    }
    else {
        if (this.ans[account1 - 1] < money) {
            return false;
        }
        else {
            this.ans[account1 - 1] -= money;
            this.ans[account2 - 1] += money;
            return true;
        }
    }
};

/** 
 * @param {number} account 
 * @param {number} money
 * @return {boolean}
 */
Bank.prototype.deposit = function (account, money) {
    if (account > this.ans.length || account < 0) {
        return false;
    }
    else {
        this.ans[account - 1] += money;
        return true;
    }
};

/** 
 * @param {number} account 
 * @param {number} money
 * @return {boolean}
 */
Bank.prototype.withdraw = function (account, money) {
    if (account > this.ans.length || account < 0) {
        return false;
    }
    else {
        if (this.ans[account - 1] < money) {
            return false;
        }
        else {
            this.ans[account - 1] -= money;
            return true;
        }
    }
};

/** 
 * Your Bank object will be instantiated and called as such:
 * var obj = new Bank(balance)
 * var param_1 = obj.transfer(account1,account2,money)
 * var param_2 = obj.deposit(account,money)
 * var param_3 = obj.withdraw(account,money)
 */