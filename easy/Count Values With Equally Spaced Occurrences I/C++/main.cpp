// Problem: Count Values With Equally Spaced Occurrences I
// Link to the problem: https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-i/
class Solution
{
public:
    int countSpecialIntegers(vector<int> &nums)
    {
        const int n = nums.size();
        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]].push_back(i);
        }
        int ans = 0;
        for (const pair<int, vector<int>> i : m)
        {
            if (i.second.size() == 3)
            {
                const int m = i.second.size();
                bool x = true;
                for (int j = 1; j < m - 1; j++)
                {
                    if (i.second[j] - i.second[j - 1] != i.second[j + 1] - i.second[j])
                    {
                        x = false;
                        break;
                    }
                }
                if (x)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};