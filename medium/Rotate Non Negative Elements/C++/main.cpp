// Problem: Rotate Non Negative Elements
// Link to the problem: https://leetcode.com/problems/rotate-non-negative-elements/
class Solution
{
public:
    vector<int> rotateElements(vector<int> &nums, int k)
    {
        const int n = nums.size();
        vector<int> pos;
        for (const int num : nums)
        {
            if (num >= 0)
            {
                pos.push_back(num);
            }
        }
        const int m = pos.size();
        if (m == 0 || k % m == 0)
        {
            return nums;
        }
        const int p = k % m;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                nums[i] = pos[(p + j) % m];
                j++;
            }
        }
        return nums;
    }
};