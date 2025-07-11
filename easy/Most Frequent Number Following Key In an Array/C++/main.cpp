// Problem: Most Frequent Number Following Key In an Array
// Link to the problem: https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/
class Solution
{
public:
    int mostFrequent(vector<int> &nums, int key)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == key)
            {
                m[nums[i + 1]]++;
            }
        }
        int maxfreq = 0;
        for (auto i : m)
        {
            maxfreq = max(maxfreq, i.second);
        }
        int ans = 0;
        for (auto i : m)
        {
            if (i.second == maxfreq)
            {
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};