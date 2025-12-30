// Problem: Find Polygon With the Largest Perimeter
// Link to the problem: https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/
class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        long long sum = 0;
        sort(nums.begin(), nums.end());
        for (const int &num : nums)
        {
            sum += num;
        }
        const int n = nums.size();
        for (int i = n - 1; i >= 2; i--)
        {
            sum -= nums[i];
            if (sum > nums[i])
            {
                const long long ans = sum + nums[i];
                return ans;
            }
        }
        return -1;
    }
};