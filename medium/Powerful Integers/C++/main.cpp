// Problem: Powerful Integers
// Link to the problem: https://leetcode.com/problems/powerful-integers/
class Solution
{
public:
    vector<int> powerfulIntegers(int x, int y, int bound)
    {
        unordered_set<int> s;
        for (int i = 0; i < 20; i++)
        {
            const int a = pow(x, i);
            if (a > bound)
            {
                break;
            }
            for (int j = 0; j < 20; j++)
            {
                const int b = pow(y, j);
                int c = a + b;
                if (c <= bound)
                {
                    s.insert(c);
                }
                else
                {
                    break;
                }
            }
        }
        const vector<int> ans(s.begin(), s.end());
        return ans;
    }
};