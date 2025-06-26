// Problem: Lemonade Change
// Link to the problem: https://leetcode.com/problems/lemonade-change/
class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int countFive = 0, countTen = 0, countTwenty = 0;
        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
            {
                countFive++;
            }
            else if (bills[i] == 10)
            {
                if (countFive < 1)
                {
                    return false;
                }
                else
                {
                    countFive--;
                    countTen++;
                }
            }
            else
            {
                if (countTen < 1)
                {
                    if (countFive < 3)
                    {
                        return false;
                    }
                    else
                    {
                        countFive -= 3;
                        countTwenty++;
                    }
                }
                else
                {
                    if (countFive < 1)
                    {
                        return false;
                    }
                    else
                    {
                        countTen--;
                        countFive--;
                        countTwenty++;
                    }
                }
            }
        }
        return true;
    }
};