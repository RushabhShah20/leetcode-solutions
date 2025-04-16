// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
class Solution
{
public:
    vector<int> findIndices(vector<int> &nums, int indexDifference, int valueDifference)
    {
        vector<int> ans(2, -1);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if ((abs(i - j) >= indexDifference) && (abs(nums[i] - nums[j]) >= valueDifference))
                {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }
};