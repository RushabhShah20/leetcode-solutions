// Problem: Maximum Sum With Exactly K Elements
// Link to the problem: https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/
class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int sum = 0;
        while (k > 0)
        {
            int max = *max_element(nums.begin(), nums.end());
            nums.erase(find(nums.begin(), nums.end(), max));
            nums.push_back(max + 1);
            sum += max;
            k--;
        }
        return sum + k;
    }
};