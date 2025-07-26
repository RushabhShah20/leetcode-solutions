// Problem: Kth Distinct String in an Array
// Link to the problem: https://leetcode.com/problems/kth-distinct-string-in-an-array/
class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> x;
        for (int i = 0; i < arr.size(); i++)
        {
            x[arr[i]]++;
        }
        vector<string> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            if (x[arr[i]] == 1)
            {
                ans.push_back(arr[i]);
            }
        }
        if (ans.size() < k)
        {
            return "";
        }
        else
        {
            return ans[k - 1];
        }
    }
};