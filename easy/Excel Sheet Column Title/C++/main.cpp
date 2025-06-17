// Problem: Excel Sheet Column Title
// Link to the problem: https://leetcode.com/problems/excel-sheet-column-title/
class Solution
{
public:
    vector<int> characters(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            n--;
            ans.push_back(n % 26);
            n /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertToTitle(int columnNumber)
    {
        vector<int> chars = characters(columnNumber);
        string ans = "";
        for (int i = 0; i < chars.size(); i++)
        {
            ans += ('A' + chars[i]);
        }
        return ans;
    }
};