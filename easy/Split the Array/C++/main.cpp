// Problem: Split the Array
// Link to the problem: https://leetcode.com/problems/split-the-array/
class Solution
{
public:
    bool isPossibleToSplit(vector<int> &nums)
    {
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]]++;
            if (x[nums[i]] > 2)
            {
                return false;
            }
        }
        return true;
    }
};