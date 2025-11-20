// Problem: Set Intersection Size At Least Two
// Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
class Solution
{
public:
    int intersectionSizeTwo(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
             {if(a[1]==b[1]){return a[0]>b[0];}return a[1]<b[1]; });
        int ans = 0;
        int a = -1, b = -1;
        for (vector<int> interval : intervals)
        {
            int l = interval[0], r = interval[1];
            if (l > b)
            {
                a = r - 1;
                b = r;
                ans += 2;
            }
            else if (l > a)
            {
                a = b;
                b = r;
                ans += 1;
            }
        }
        return ans;
    }
};