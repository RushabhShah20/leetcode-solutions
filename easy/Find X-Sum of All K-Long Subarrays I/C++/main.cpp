// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
class Solution
{
public:
    vector<int> findXSum(vector<int> &nums, int k, int x)
    {
        int n = nums.size();
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (i >= k)
            {
                m[nums[i]]++;
                m[nums[i - k]]--;
            }
            else
            {
                m[nums[i]]++;
            }
            if (i >= k - 1)
            {
                vector<pair<int, int>> v;
                for (pair<int, int> i : m)
                {
                    v.push_back({i.first, i.second});
                }
                sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
                     { if(a.second==b.second){return a.first>b.first;}else{return a.second>b.second;} });
                int sum = 0;
                for (int i = 0; i < min(x, (int)v.size()); i++)
                {
                    sum += (v[i].first * v[i].second);
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};