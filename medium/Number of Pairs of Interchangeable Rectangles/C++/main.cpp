// Problem: Number of Pairs of Interchangeable Rectangles
// Link to the problem: https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/
class Solution
{
public:
    long long nc2(int n)
    {
        return (((long long)(n) * (long long)(n - 1)) / 2);
    }
    long long interchangeableRectangles(vector<vector<int>> &rectangles)
    {
        long long ans = 0;
        map<double, long long> x;
        for (long long i = 0; i < rectangles.size(); i++)
        {
            x[(double)(rectangles[i][0]) / (double)(rectangles[i][1])]++;
        }
        for (auto i : x)
        {
            ans += nc2(i.second);
        }
        return ans;
    }
};