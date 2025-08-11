// Problem: Range Product Queries of Powers
// Link to the problem: https://leetcode.com/problems/range-product-queries-of-powers/
class Solution
{
public:
    vector<int> sumOfPowersOfTwo(int n)
    {
        vector<int> binary;
        while (n > 0)
        {
            binary.push_back(n % 2);
            n /= 2;
        }
        vector<int> ans;
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == 1)
            {
                ans.push_back(pow(2, i));
            }
        }
        return ans;
    }
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size());
        vector<int> sum = sumOfPowersOfTwo(n);
        for (int i = 0; i < queries.size(); i++)
        {
            long x = 1;
            for (int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                x = ((x * sum[j]) % 1000000007);
            }
            ans[i] = (int)x;
        }
        return ans;
    }
};