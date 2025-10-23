// Problem: Find Subsequence of Length K With the Largest Sum
// Link to the problem: https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/
class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<pair<int, int>> pos, neg;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                pos.push_back({nums[i], i});
            }
            else
            {
                neg.push_back({nums[i], i});
            }
        }
        sort(pos.begin(), pos.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first > b.first; });
        sort(neg.begin(), neg.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first > b.first; });
        vector<pair<int, int>> a;
        int x = k;
        for (int i = 0; i < min((int)pos.size(), x); i++)
        {
            a.push_back(pos[i]);
            k--;
        }
        for (int i = 0; i < min((int)neg.size(), k); i++)
        {
            a.push_back(neg[i]);
        }
        sort(a.begin(), a.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });
        vector<int> ans;
        for (int i = 0; i < a.size(); i++)
        {
            ans.push_back(a[i].first);
        }
        return ans;
    }
};