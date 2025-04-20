// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
class Solution
{
public:
    int rev(long n)
    {
        long rev = 0;
        while (n > 0)
        {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> s;
        vector<int> ans = nums;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(rev(nums[i]));
        }
        for (int i = 0; i < ans.size(); i++)
        {
            s.insert(ans[i]);
        }
        return s.size();
    }
};