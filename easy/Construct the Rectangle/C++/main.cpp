// Problem: Construct the Rectangle
// Link to the problem: https://leetcode.com/problems/construct-the-rectangle/
class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        vector<int> factors;
        for (int i = 1; i <= sqrt(area); i++)
        {
            if (area % i == 0)
            {
                factors.push_back(i);
                factors.push_back(area / i);
            }
        }
        sort(factors.begin(), factors.end());
        int n = factors.size();
        if (n % 2 == 0)
        {
            return {factors[n / 2], factors[(n / 2) - 1]};
        }
        else
        {
            return {factors[n / 2], factors[n / 2]};
        }
    }
};