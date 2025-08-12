// Problem: Hand of Straights
// Link to the problem: https://leetcode.com/problems/hand-of-straights/
class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        int n = hand.size();
        if (n % groupSize != 0)
        {
            return false;
        }
        else
        {
            sort(hand.begin(), hand.end());
            vector<stack<int>> a(n / groupSize);
            for (int i = 0; i < hand.size(); i++)
            {
                bool x = false;
                for (int j = 0; j < a.size(); j++)
                {
                    if (a[j].empty())
                    {
                        a[j].push(hand[i]);
                        x = true;
                        break;
                    }
                    else
                    {
                        if (a[j].top() == hand[i] - 1)
                        {
                            if (a[j].size() < groupSize)
                            {
                                a[j].push(hand[i]);
                                x = true;
                                break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                    }
                }
                if (x == false)
                {
                    return false;
                }
            }
            return true;
        }
    }
};