// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
class Solution
{
public:
    int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
    {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int i = 0, j = 0, ans = 0, n = players.size(), m = trainers.size();
        while (j < m && i < n)
        {
            if (players[i] <= trainers[j])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};