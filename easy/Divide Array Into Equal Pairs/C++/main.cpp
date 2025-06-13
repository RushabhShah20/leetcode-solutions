// Problem: Divide Array Into Equal Pairs
// Link to the problem: https://leetcode.com/problems/divide-array-into-equal-pairs/
class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto &entry : freq)
        {
            if (entry.second % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
};