// Problem: Minimum Absolute Difference
// Link to the problem: https://leetcode.com/problems/minimum-absolute-difference/
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            minDiff = min(minDiff, abs(arr[i] - arr[i + 1]));
        }
        vector<vector<int>> ans;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) == minDiff)
            {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};