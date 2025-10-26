// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
class Bank {
    private ans: number[] = new Array();
    constructor(balance: number[]) {
        this.ans = balance;
    }

    transfer(account1: number, account2: number, money: number): boolean {
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
    }

    deposit(account: number, money: number): boolean {
        if (account > this.ans.length || account < 0) {
            return false;
        }
        else {
            this.ans[account - 1] += money;
            return true;
        }
    }

    withdraw(account: number, money: number): boolean {
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
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * var obj = new Bank(balance)
 * var param_1 = obj.transfer(account1,account2,money)
 * var param_2 = obj.deposit(account,money)
 * var param_3 = obj.withdraw(account,money)
 */