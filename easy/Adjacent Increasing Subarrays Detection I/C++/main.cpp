// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
class Solution
{
public:
    bool hasIncreasingSubarrays(vector<int> &nums, int k)
    {
        vector<int> indices;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            vector<int> x(nums.begin() + i, nums.begin() + i + k);
            bool y = true;
            for (int j = 0; j < x.size() - 1; j++)
            {
                if (x[j] >= x[j + 1])
                {
                    y = false;
                    break;
                }
            }
            if (y == true)
            {
                indices.push_back(i);
            }
        }
        if (indices.size() >= 2)
        {
            for (int i = 0; i < indices.size(); i++)
            {
                for (int j = i + 1; j < indices.size(); j++)
                {
                    if (indices[j] - indices[i] == k)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};