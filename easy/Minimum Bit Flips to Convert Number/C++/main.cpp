// Problem: Minimum Bit Flips to Convert Number
// Link to the problem: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
class Solution
{
public:
    vector<int> binaryVector(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 2);
            num /= 2;
        }
        for (int i = result.size(); i < 32; i++)
        {
            result.push_back(0);
        }
        reverse(result.begin(), result.end());
        return result;
    }
    int minBitFlips(int start, int goal)
    {
        int ans = 0;
        vector<int> x = binaryVector(start);
        vector<int> y = binaryVector(goal);
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] != y[i])
            {
                ans++;
            }
        }
        return ans;
    }
};