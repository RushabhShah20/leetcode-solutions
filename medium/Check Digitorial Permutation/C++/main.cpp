// Problem: Check Digitorial Permutation
// Link to the problem: https://leetcode.com/problems/check-digitorial-permutation/
class Solution
{
public:
    bool isDigitorialPermutation(int n)
    {
        vector<int> factorions = {1, 2, 145, 40585};
        string t = to_string(n);
        sort(t.begin(), t.end());
        for (const int factorian : factorions)
        {
            string s = to_string(factorian);
            sort(s.begin(), s.end());
            if (t == s)
            {
                return true;
            }
        }
        return false;
    }
};