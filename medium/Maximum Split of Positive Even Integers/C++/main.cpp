// Problem: Maximum Split of Positive Even Integers
// Link to the problem: https://leetcode.com/problems/maximum-split-of-positive-even-integers/
class Solution
{
public:
    vector<long long> maximumEvenSplit(long long finalSum)
    {
        if (finalSum % 2 != 0)
        {
            return {};
        }
        else
        {
            vector<long long> ans;
            long long x = 2;
            while (finalSum >= x)
            {
                ans.push_back(x);
                finalSum -= x;
                x += 2;
            }
            ans.back() += finalSum;
            return ans;
        }
    }
};