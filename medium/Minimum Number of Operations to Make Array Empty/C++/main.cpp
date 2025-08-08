// Problem: Minimum Number of Operations to Make Array Empty
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            y[i.second].push_back(i.first);
        }
        for (auto i : y)
        {
            if (i.first == 1)
            {
                return -1;
            }
            else
            {
                if (i.first % 3 == 1)
                {
                    ans += (i.second.size()) * (2 + ((i.first - 4) / 3));
                }
                else if (i.first % 3 == 2)
                {
                    ans += (i.second.size()) * (1 + ((i.first - 2) / 3));
                }
                else
                {
                    ans += (i.second.size()) * (i.first / 3);
                }
            }
        }
        return ans;
    }
};