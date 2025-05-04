// Problem: Find Closest Number to Zero
// Link to the problem: https://leetcode.com/problems/find-closest-number-to-zero/
class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        vector<int> dist(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            dist[i] = abs(nums[i] - 0);
        }
        vector<int> v;
        int min = INT_MAX;
        for (int i = 0; i < dist.size(); i++)
        {
            if (min > dist[i])
            {
                min = dist[i];
            }
        }
        for (int i = 0; i < dist.size(); i++)
        {
            if (min == dist[i])
            {
                v.push_back(nums[i]);
            }
        }
        return *max_element(v.begin(), v.end());
    }
};