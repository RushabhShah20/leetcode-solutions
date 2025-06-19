// Problem: Most Frequent Even Element
// Link to the problem: https://leetcode.com/problems/most-frequent-even-element/
class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                x[nums[i]]++;
            }
        }
        if (x.size() == 0)
        {
            return -1;
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
        return *min_element(ans.begin(), ans.end());
    }
};