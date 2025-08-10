// Problem: Max Pair Sum in an Array
// Link to the problem: https://leetcode.com/problems/max-pair-sum-in-an-array/
class Solution
{
public:
    int largestDigit(int n)
    {
        int ans = 0;
        string s = to_string(n);
        for (int i = 0; i < s.size(); i++)
        {
            ans = max(ans, s[i] - '0');
        }
        return ans;
    }
    int maxSum(vector<int> &nums)
    {
        int ans = 0;
        map<int, vector<int>> x;
        for (int i = 0; i < nums.size(); i++)
        {
            int y = largestDigit(nums[i]);
            x[y].push_back(nums[i]);
        }
        vector<int> b;
        for (auto i : x)
        {
            if (i.second.size() > 1)
            {
                int c = *max_element(i.second.begin(), i.second.end());
                i.second.erase(max_element(i.second.begin(), i.second.end()));
                int d = *max_element(i.second.begin(), i.second.end());
                b.push_back(c + d);
            }
        }
        if (b.size() == 0)
        {
            return -1;
        }
        else
        {
            ans = *max_element(b.begin(), b.end());
            return ans;
        }
    }
};