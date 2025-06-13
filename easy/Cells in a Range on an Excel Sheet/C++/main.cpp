// Problem: Cells in a Range on an Excel Sheet
// Link to the problem: https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/
class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        vector<string> ans;
        for (int i = s[0]; i <= s[3]; i++)
        {
            for (int j = s[1]; j <= s[4]; j++)
            {
                ans.push_back((char(i) + to_string(j - 48)));
            }
        }
        return ans;
    }
};