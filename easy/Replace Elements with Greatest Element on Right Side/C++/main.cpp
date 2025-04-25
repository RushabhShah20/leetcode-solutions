// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        vector<int> ans;
        ans.push_back(-1);
        int max = -1;
        if (arr.size() == 1)
        {
            return ans;
        }
        else
        {
            for (int i = arr.size() - 1; i >= 1; i--)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
                ans.push_back(max);
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    }
};