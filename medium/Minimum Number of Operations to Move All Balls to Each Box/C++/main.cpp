// Problem: Minimum Number of Operations to Move All Balls to Each Box
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        const int n = boxes.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (boxes[j] == '1')
                {
                    ans[i] += abs(i - j);
                }
            }
        }
        return ans;
    }
};