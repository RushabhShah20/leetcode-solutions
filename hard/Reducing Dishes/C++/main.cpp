// Problem: Reducing Dishes
// Link to the problem: https://leetcode.com/problems/reducing-dishes/
class Solution
{
public:
    int maxSatisfaction(vector<int> &satisfaction)
    {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size(), ans = 0, i = n - 1, sum = 0;
        while (i >= 0 && (satisfaction[i] + sum > 0))
        {
            sum += satisfaction[i];
            ans += sum;
            i--;
        }
        return ans;
    }
};