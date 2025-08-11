// Problem: Max Sum of a Pair With Equal Sum of Digits
// Link to the problem: https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/
class Solution
{
public:
    int digitSum(int n)
    {
        string s = to_string(n);
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ans += (s[i] - '0');
        }
        return ans;
    }
    int maximumSum(vector<int> &nums)
    {
        map<int, vector<int>> x;
        for (int i = 0; i < nums.size(); i++)
        {
            int y = digitSum(nums[i]);
            x[y].push_back(nums[i]);
        }
        vector<int> ans;
        for (auto i : x)
        {
            if (i.second.size() > 1)
            {
                int a = *max_element(i.second.begin(), i.second.end());
                i.second.erase(max_element(i.second.begin(), i.second.end()));
                int b = *max_element(i.second.begin(), i.second.end());
                ans.push_back(a + b);
            }
        }
        return ((ans.size() == 0) ? (-1) : (*max_element(ans.begin(), ans.end())));
    }
};