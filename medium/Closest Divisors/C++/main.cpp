// Problem: Closest Divisors
// Link to the problem: https://leetcode.com/problems/closest-divisors/
class Solution
{
public:
    vector<int> factors(int n)
    {
        vector<int> ans;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ans.push_back(i);
                ans.push_back(n / i);
            }
        }
        return ans;
    }
    vector<int> closestDivisors(int num)
    {
        vector<int> factorsA = factors(num + 1), factorsB = factors(num + 2);
        int minDiff = INT_MAX;
        for (int i = 0; i < factorsA.size() - 1; i++)
        {
            minDiff = min(minDiff, abs(factorsA[i] - factorsA[i + 1]));
        }
        for (int i = 0; i < factorsB.size() - 1; i++)
        {
            minDiff = min(minDiff, abs(factorsB[i] - factorsB[i + 1]));
        }
        vector<int> ans;
        for (int i = 0; i < factorsA.size() - 1; i++)
        {
            if (abs(factorsA[i] - factorsA[i + 1]) == minDiff)
            {
                return {factorsA[i], factorsA[i + 1]};
            }
        }
        for (int i = 0; i < factorsB.size() - 1; i++)
        {
            if (abs(factorsB[i] - factorsB[i + 1]) == minDiff)
            {
                return {factorsB[i], factorsB[i + 1]};
            }
        }
        return ans;
    }
};