// Problem: Time Needed to Buy Tickets
// Link to the problem: https://leetcode.com/problems/time-needed-to-buy-tickets/
class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = 0;
        vector<int> persons(tickets.size());
        for (int i = 0; i < tickets.size(); i++)
        {
            persons[i] = i;
        }
        while (find(persons.begin(), persons.end(), k) != persons.end())
        {
            int x = tickets.front();
            tickets.erase(tickets.begin());
            int y = persons.front();
            persons.erase(persons.begin());
            x--;
            if (x != 0)
            {
                tickets.push_back(x);
                persons.push_back(y);
            }
            ans++;
        }
        return ans;
    }
};