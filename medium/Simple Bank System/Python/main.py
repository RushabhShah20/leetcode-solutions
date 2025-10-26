# Problem: Simple Bank System
# Link to the problem: https://leetcode.com/problems/simple-bank-system/
class Bank:
    ans = []

    def __init__(self, balance: List[int]):
        self.ans = balance

    def transfer(self, account1: int, account2: int, money: int) -> bool:
        if (account1 > len(self.ans) or account1 < 0) or (
            account2 > len(self.ans) or account2 < 0
        ):
            return False
        else:
            if self.ans[account1 - 1] < money:
                return False
            else:
                self.ans[account1 - 1] -= money
                self.ans[account2 - 1] += money
                return True

    def deposit(self, account: int, money: int) -> bool:
        if account > len(self.ans) or account < 0:
            return False
        else:
            self.ans[account - 1] += money
            return True

    def withdraw(self, account: int, money: int) -> bool:
        if account > len(self.ans) or account < 0:
            return False
        else:
            if self.ans[account - 1] < money:
                return False
            else:
                self.ans[account - 1] -= money
                return True


# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)
