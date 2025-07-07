// Problem: Maximum Value of a String in an Array
// Link to the problem: https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/
class Solution
{
public:
    int maximumValue(vector<string> &strs)
    {
        vector<int> ans;
        for (int i = 0; i < strs.size(); i++)
        {
            bool x = false;
            for (int j = 0; j < strs[i].size(); j++)
            {
                if (islower(strs[i][j]))
                {
                    x = true;
                    break;
                }
            }
            if (x == true)
            {
                ans.push_back(strs[i].size());
            }
            else
            {
                ans.push_back(stoi(strs[i]));
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};