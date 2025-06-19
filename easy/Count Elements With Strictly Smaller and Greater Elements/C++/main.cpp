// Problem: Count Elements With Strictly Smaller and Greater Elements
// Link to the problem: https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/
class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int ans = 0, minElement = *min_element(nums.begin(), nums.end()), maxElement = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != minElement && nums[i] != maxElement)
            {
                ans++;
            }
        }
        return ans;
    }
};