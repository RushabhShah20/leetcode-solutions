// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
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
    vector<int> complement(vector<int> &res)
    {
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] == 1)
            {
                res[i] = 0;
            }
            else if (res[i] == 0)
            {
                res[i] = 1;
            }
        }
        return res;
    }
    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            int ans = 0;
            vector<int> binary = toBinary(n);
            vector<int> com = complement(binary);
            for (int i = 0; i < com.size(); i++)
            {
                ans += pow(2, i) * com[i];
            }
            return ans;
        }
    }
};