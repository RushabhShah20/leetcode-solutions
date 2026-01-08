// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        int maxVal = 0, minVal = 1001;
        for (const int &num : nums)
        {
            maxVal = max(maxVal, num);
            minVal = min(minVal, num);
        }
        const int ans = gcd(maxVal, minVal);
        return ans;
    }
};