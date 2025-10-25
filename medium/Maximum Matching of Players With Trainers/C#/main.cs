// Problem: Maximum Matching of Players With Trainers
// Link to the problem: https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
public class Solution
{
    public int MatchPlayersAndTrainers(int[] players, int[] trainers)
    {
        Array.Sort(players);
        Array.Sort(trainers);
        int i = 0, j = 0, ans = 0, n = players.Length, m = trainers.Length;
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
}