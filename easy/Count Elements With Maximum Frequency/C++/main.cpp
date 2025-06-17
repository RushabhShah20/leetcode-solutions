// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            for (int j = 0; j < i.second; j++)
            {
                y[i.second].push_back(i.first);
            }
        }
        int maxFreq = 0;
        for (auto i : y)
        {
            maxFreq = max(maxFreq, i.first);
        }
        vector<int> ans = y[maxFreq];
        return ans.size();
    }
};