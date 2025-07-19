// Problem: Distinct Prime Factors of Product of Array
// Link to the problem: https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/
class Solution
{
public:
    vector<int> computeSPF(int N)
    {
        vector<int> spf(N + 1);
        for (int i = 0; i <= N; ++i)
        {
            spf[i] = i;
        }
        for (int i = 2; i * i <= N; ++i)
        {
            if (spf[i] == i)
            {
                for (int j = i * i; j <= N; j += i)
                {
                    if (spf[j] == j)
                    {
                        spf[j] = i;
                    }
                }
            }
        }
        return spf;
    }
    vector<int> primeFac(int n, const vector<int> &spf)
    {
        set<int> uniqueFactors;
        while (n > 1)
        {
            uniqueFactors.insert(spf[n]);
            n /= spf[n];
        }
        return vector<int>(uniqueFactors.begin(), uniqueFactors.end());
    }
    int distinctPrimeFactors(vector<int> &nums)
    {
        set<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> spf = computeSPF(nums[i]);
            vector<int> res = primeFac(nums[i], spf);
            for (int element : res)
            {
                ans.insert(element);
            }
        }
        return ans.size();
    }
};