// Problem: Maximum Points You Can Obtain from Cards
// Link to the problem: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size(), ans = 0, sum = 0;
        for (int card : cardPoints)
        {
            sum += card;
        }
        int currSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= n - k)
            {
                currSum += cardPoints[i];
                currSum -= cardPoints[i - (n - k)];
            }
            else
            {
                currSum += cardPoints[i];
            }
            if (i >= n - k - 1)
            {
                ans = max(ans, sum - currSum);
            }
        }
        return ans;
    }
};