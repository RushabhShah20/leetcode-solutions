// Problem: Calculate Amount Paid in Taxes
// Link to the problem: https://leetcode.com/problems/calculate-amount-paid-in-taxes/
class Solution
{
public:
    double calculateTax(vector<vector<int>> &brackets, int income)
    {
        double ans = 0;
        if (income >= brackets[0][0])
        {
            ans = ((brackets[0][0] * brackets[0][1]) / 100.0);
        }
        else
        {
            ans += ((income * brackets[0][1]) / 100.0);
        }
        for (int i = 1; i < brackets.size(); i++)
        {
            if (income >= (brackets[i][0]))
            {
                ans += (((brackets[i][0] - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
            }
            else
            {
                ans += (((income - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
                break;
            }
        }
        return ans;
    }
};