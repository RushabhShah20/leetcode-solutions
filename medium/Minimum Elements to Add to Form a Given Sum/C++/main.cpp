// Problem: Minimum Elements to Add to Form a Given Sum
// Link to the problem: https://leetcode.com/problems/minimum-elements-to-add-to-form-a-given-sum/
class Solution
{
public:
    int minElements(vector<int> &nums, int limit, int goal)
    {
        long long sum = 0;
        for (const int &num : nums)
        {
            sum += num;
        }
        const int ans = ((abs((long long)(goal)-sum) + (long long)(limit) - (long long)(1)) / (long long)(limit));
        return ans;
    }
};