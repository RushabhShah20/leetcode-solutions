// Problem: Digit Frequency Score
// Link to the problem: https://leetcode.com/problems/digit-frequency-score/
class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        vector<int> a(10, 0);
        while (n > 0)
        {
            a[n % 10]++;
            n /= 10;
        }
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            ans += i * a[i];
        }
        return ans;
    }
};