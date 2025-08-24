// Problem: Partition Array Into K-Distinct Groups
// Link to the problem: https://leetcode.com/problems/partition-array-into-k-distinct-groups/
class Solution
{
public:
    bool partitionArray(vector<int> &nums, int k)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int x = nums.size() / k;
        if (nums.size() % k != 0)
        {
            return false;
        }
        else
        {
            for (auto i : m)
            {
                if (i.second > x)
                {
                    return false;
                }
            }
            return true;
        }
    }
};