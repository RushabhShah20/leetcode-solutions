// Problem: Find the Maximum Divisibility Score
// Link to the problem: https://leetcode.com/problems/find-the-maximum-divisibility-score/
class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {
        map<int, int> m;
        for (int i = 0; i < divisors.size(); i++)
        {
            m[divisors[i]] = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] % divisors[i] == 0)
                {
                    m[divisors[i]]++;
                }
            }
        }
        int maxFreq = 0;
        for (auto i : m)
        {
            if (maxFreq < i.second)
            {
                maxFreq = i.second;
            }
        }
        vector<int> ans;
        for (auto i : m)
        {
            if (i.second == maxFreq)
            {
                ans.push_back(i.first);
            }
        }
        return ((ans.size() == 0) ? (0) : (*min_element(ans.begin(), ans.end())));
    }
};