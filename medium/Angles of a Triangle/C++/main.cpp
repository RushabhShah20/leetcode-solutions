// Problem: Angles of a Triangle
// Link to the problem: https://leetcode.com/problems/angles-of-a-triangle/
class Solution
{
public:
    vector<double> internalAngles(vector<int> &sides)
    {
        const long double a = (long double)sides[0], b = (long double)sides[1], c = (long double)sides[2];
        const double pi = 3.14159265358979323846;
        if (a + b > c && b + c > a && a + c > b)
        {
            const long double x = acosl((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / pi);
            const long double y = acosl((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / pi);
            const long double z = acosl((a * a + b * b - c * c) / (2 * a * b)) * (180.0 / pi);
            vector<double> ans = {(double)x, (double)y, (double)z};
            sort(ans.begin(), ans.end());
            return ans;
        }
        return {};
    }
};