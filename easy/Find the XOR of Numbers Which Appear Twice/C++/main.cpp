// Problem: Find the XOR of Numbers Which Appear Twice
// Link to the problem: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> m;
        vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (i.second == 2)
            {
                a.push_back(i.first);
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            ans ^= a[i];
        }
        return ans;
    }
};