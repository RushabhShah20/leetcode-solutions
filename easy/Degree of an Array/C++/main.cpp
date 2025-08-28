// Problem: Degree of an Array
// Link to the problem: https://leetcode.com/problems/degree-of-an-array/
class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]]++;
        }
        int maxFreq = 0, maxFreqElement = -1;
        for (auto i : x)
        {
            if (maxFreq < i.second)
            {
                maxFreq = i.second;
            }
        }
        map<int, vector<int>> y;
        for (int i = 0; i < nums.size(); i++)
        {
            if (x[nums[i]] == maxFreq)
            {
                y[nums[i]].push_back(i);
            }
        }
        int ans = INT_MAX;
        for (auto i : y)
        {
            ans = min(i.second.back() - i.second.front() + 1, ans);
        }
        return ans;
    }
};