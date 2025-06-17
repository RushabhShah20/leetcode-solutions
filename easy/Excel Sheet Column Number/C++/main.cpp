// Problem: Excel Sheet Column Number
// Link to the problem: https://leetcode.com/problems/excel-sheet-column-number/
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        for (int i = columnTitle.size() - 1; i >= 0; i--)
        {
            int index = columnTitle[i] - 'A' + 1;
            int power = columnTitle.size() - 1 - i;
            ans += ((pow(26, power) * (index)));
        }
        return ans;
    }
};