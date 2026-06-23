// Problem: Library Late Fee Calculator
// Link to the problem: https://leetcode.com/problems/library-late-fee-calculator/
class Solution
{
public:
    int lateFee(vector<int> &daysLate)
    {
        const int n = daysLate.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            const int x = daysLate[i];
            ans += x == 1 ? 1 : (x >= 2 && x <= 5 ? 2 * x : 3 * x);
        }
        return ans;
    }
};