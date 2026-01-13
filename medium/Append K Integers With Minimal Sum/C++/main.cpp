// Problem: Append K Integers With Minimal Sum
// Link to the problem: https://leetcode.com/problems/append-k-integers-with-minimal-sum/
class Solution
{
public:
    long long minimalKSum(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        unordered_set<int> s;
        long long sum = 0;
        for (const int &num : nums)
        {
            if (s.find(num) == s.end() && num <= k)
            {
                k++;
                sum += num;
            }
            s.insert(num);
        }
        const long long ans = (((long long)(k) * (long long)(k + 1) / (long long)(2)) - sum);
        return ans;
    }
};