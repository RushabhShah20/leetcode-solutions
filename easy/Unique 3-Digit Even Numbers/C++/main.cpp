// Problem: Unique 3-Digit Even Numbers
// Link to the problem: https://leetcode.com/problems/unique-3-digit-even-numbers/
class Solution
{
public:
    int totalNumbers(vector<int> &digits)
    {
        const int n = digits.size();
        vector<int> a(10);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            a[digits[i]]++;
        }
        for (int i = 1; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 9; k += 2)
                {
                    ans += (a[i] > 0) && (a[j] > (i == j)) && (a[k] > (i == k) + (j == k));
                }
            }
        }
        return ans;
    }
};