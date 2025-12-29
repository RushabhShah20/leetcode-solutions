// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
class Solution
{
public:
    int minimizeSum(vector<int> &nums)
    {
        int s1 = 1000000001, s2 = 1000000001, s3 = 1000000001, l1 = 0, l2 = 0, l3 = 0;
        for (const int &num : nums)
        {
            if (s1 > num)
            {
                s3 = s2;
                s2 = s1;
                s1 = num;
            }
            else if (s2 > num)
            {
                s3 = s2;
                s2 = num;
            }
            else if (s3 > num)
            {
                s3 = num;
            }
            if (l1 < num)
            {
                l3 = l2;
                l2 = l1;
                l1 = num;
            }
            else if (l2 < num)
            {
                l3 = l2;
                l2 = num;
            }
            else if (l3 < num)
            {
                l3 = num;
            }
        }
        const int a = l3 - s1, b = l1 - s3, c = l2 - s2;
        const int ans = min({a, b, c});
        return ans;
    }
};