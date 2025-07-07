// Problem: Find the Array Concatenation Value
// Link to the problem: https://leetcode.com/problems/find-the-array-concatenation-value/
class Solution
{
public:
    long long findTheArrayConcVal(vector<int> &nums)
    {
        long long ans = 0;
        if (nums.size() % 2 == 0)
        {
            while (nums.size() != 0)
            {
                long long x = nums.front();
                long long y = nums.back();
                long long z = stoll(to_string(x) + to_string(y));
                nums.erase(nums.begin());
                nums.erase(nums.end() - 1);
                ans += z;
            }
        }
        else
        {
            while (nums.size() != 1)
            {
                long long x = nums.front();
                long long y = nums.back();
                long long z = stoll(to_string(x) + to_string(y));
                nums.erase(nums.begin());
                nums.erase(nums.end() - 1);
                ans += z;
            }
            ans += nums[0];
        }
        return ans;
    }
};