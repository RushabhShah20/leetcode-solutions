// Problem: Best Poker Hand
// Link to the problem: https://leetcode.com/problems/best-poker-hand/
class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        map<char, int> x;
        map<int, int> y;
        int maxSuit = 0, maxRank = 0;
        for (int i = 0; i < suits.size(); i++)
        {
            x[suits[i]]++;
        }
        for (int i = 0; i < ranks.size(); i++)
        {
            y[ranks[i]]++;
        }
        for (auto i : x)
        {
            maxSuit = max(maxSuit, i.second);
        }
        for (auto i : y)
        {
            maxRank = max(maxRank, i.second);
        }
        if (maxSuit == 5)
        {
            return "Flush";
        }
        else if (maxRank >= 3)
        {
            return "Three of a Kind";
        }
        else if (maxRank == 2)
        {
            return "Pair";
        }
        else
        {
            return "High Card";
        }
    }
};