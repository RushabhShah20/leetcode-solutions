// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> freq(n, 0), ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            freq[A[i] - 1]++;
            freq[B[i] - 1]++;
            for (int j = 0; j < n; j++)
            {
                if (freq[j] == 2)
                {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};