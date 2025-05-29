// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
class Solution
{
public:
    int kthFactor(int n, int k)
    {
        vector<int> a;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
            }
        }
        if (a.size() < k)
        {
            return -1;
        }
        else
        {
            return a[k - 1];
        }
    }
};