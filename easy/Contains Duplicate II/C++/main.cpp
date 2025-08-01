// Problem: Contains Duplicate II
// Link to the problem: https://leetcode.com/problems/contains-duplicate-ii/
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, vector<int>> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]].push_back(i);
        }
        for (auto i : x)
        {
            for (int j = 0; j < i.second.size() - 1; j++)
            {
                if (abs(i.second[j] - i.second[j + 1]) <= k)
                {
                    return true;
                }
            }
        }
        return false;
    }
};