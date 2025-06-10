// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            int rem = n % 2;
            ans.push_back(rem);
            n /= 2;
        }
        return ans;
    }
    int smallestNumber(int n)
    {
        vector<int> binary = toBinary(n);
        vector<int> a(binary);
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = 1;
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ans += (pow(2, i) * a[i]);
        }
        return ans;
    }
};