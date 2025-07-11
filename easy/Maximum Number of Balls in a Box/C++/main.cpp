// Problem: Maximum Number of Balls in a Box
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balls-in-a-box/
class Solution
{
public:
    int sumOfDigits(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += (n % 10);
            n /= 10;
        }
        return ans;
    }
    int countBalls(int lowLimit, int highLimit)
    {
        vector<int> a(highLimit);
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int x = sumOfDigits(i);
            a[x - 1]++;
        }
        return *max_element(a.begin(), a.end());
    }
};