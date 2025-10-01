// Problem: Simple Bank System
// Link to the problem: https://leetcode.com/problems/simple-bank-system/
class Bank
{
public:
    vector<long long> ans;
    Bank(vector<long long> &balance)
    {
        ans = balance;
    }

    bool transfer(int account1, int account2, long long money)
    {
        if ((account1 > ans.size() || account1 < 0) || (account2 > ans.size() || account2 < 0))
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

    bool deposit(int account, long long money)
    {
        if (account > ans.size() || account < 0)
        {
            return false;
        }
        else
        {
            ans[account - 1] += money;
            return true;
        }
    }

    bool withdraw(int account, long long money)
    {
        if (account > ans.size() || account < 0)
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
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */