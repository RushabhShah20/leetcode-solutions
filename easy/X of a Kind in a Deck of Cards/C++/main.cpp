// Problem: X of a Kind in a Deck of Cards
// Link to the problem: https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        map<int, int> m;
        for (int i = 0; i < deck.size(); i++)
        {
            m[deck[i]]++;
        }
        int gcd = m[deck[0]];
        for (auto i : m)
        {
            gcd = __gcd(gcd, i.second);
        }
        return gcd != 1;
    }
};