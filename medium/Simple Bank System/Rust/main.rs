// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
struct Bank {
    ans:Vec<i64>
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl Bank {

    fn new(balance: Vec<i64>) -> Self {
        return Bank{ans:balance};
    }
    
    fn transfer(&mut self, account1: i32, account2: i32, money: i64) -> bool {
        if ((account1 > self.ans.len() as i32 || account1 < 0) || (account2 > self.ans.len() as i32 || account2 < 0))
        {
            return false;
        }
        else
        {
            if (self.ans[(account1 - 1) as usize] < money)
            {
                return false;
            }
            else
            {
                self.ans[(account1 - 1) as usize] -= money;
                self.ans[(account2 - 1) as usize] += money;
                return true;
            }
        }
    }
    
    fn deposit(&mut self, account: i32, money: i64) -> bool {
        if (account > self.ans.len() as i32 || account < 0)
        {
            return false;
        }
        else
        {
            self.ans[(account - 1) as usize] += money;
            return true;
        }
    }
    
    fn withdraw(&mut self, account: i32, money: i64) -> bool {
        if (account > self.ans.len() as i32 || account < 0)
        {
            return false;
        }
        else
        {
            if (self.ans[(account - 1) as usize] < money)
            {
                return false;
            }
            else
            {
                self.ans[(account - 1) as usize] -= money;
                return true;
            }
        }
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * let obj = Bank::new(balance);
 * let ret_1: bool = obj.transfer(account1, account2, money);
 * let ret_2: bool = obj.deposit(account, money);
 * let ret_3: bool = obj.withdraw(account, money);
 */