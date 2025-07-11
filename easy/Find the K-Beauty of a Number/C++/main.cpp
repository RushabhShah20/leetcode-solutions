// Problem: Find the K-Beauty of a Number
// Link to the problem: https://leetcode.com/problems/find-the-k-beauty-of-a-number/
class Solution
{
public:
    int divisorSubstrings(int num, int k)
    {
        int ans = 0;
        string x = to_string(num);
        for (int i = 0; i < x.size() - k + 1; i++)
        {
            string y = x.substr(i, k);
            int z = stoi(y);
            if (z != 0)
            {
                if (num % z == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};