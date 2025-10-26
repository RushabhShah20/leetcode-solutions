// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
public class Bank
{
    long[] ans;

    public Bank(long[] balance)
    {
        ans = balance;
    }

    public bool Transfer(int account1, int account2, long money)
    {
        if ((account1 > ans.Length || account1 < 0) || (account2 > ans.Length || account2 < 0))
        {
            return false;
        }
        else
        {
            if (ans[account1 - 1] < money)
            {
                return false;
            }
            else
            {
                ans[account1 - 1] -= money;
                ans[account2 - 1] += money;
                return true;
            }
        }
    }

    public bool Deposit(int account, long money)
    {
        if (account > ans.Length || account < 0)
        {
            return false;
        }
        else
        {
            ans[account - 1] += money;
            return true;
        }
    }

    public bool Withdraw(int account, long money)
    {
        if (account > ans.Length || account < 0)
        {
            return false;
        }
        else
        {
            if (ans[account - 1] < money)
            {
                return false;
            }
            else
            {
                ans[account - 1] -= money;
                return true;
            }
        }
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * Bank obj = new Bank(balance);
 * bool param_1 = obj.Transfer(account1,account2,money);
 * bool param_2 = obj.Deposit(account,money);
 * bool param_3 = obj.Withdraw(account,money);
 */