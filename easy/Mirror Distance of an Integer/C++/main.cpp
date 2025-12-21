// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
class Solution
{
public:
    int mirrorDistance(int n)
    {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        const int m = stoi(s);
        const int ans = abs(m - n);
        return ans;
    }
};