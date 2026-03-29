// Problem: Design Event Manager
// Link to the problem: https://leetcode.com/problems/design-event-manager/
class EventManager
{
public:
    priority_queue<pair<int, int>> pq;
    map<int, int> m;
    EventManager(vector<vector<int>> &events)
    {
        for (const vector<int> &event : events)
        {
            m[event[0]] = event[1];
            pq.push({event[1], -event[0]});
        }
    }

    void updatePriority(int eventId, int newPriority)
    {
        m[eventId] = newPriority;
        pq.push({newPriority, -eventId});
    }

    int pollHighest()
    {
        while (!pq.empty())
        {
            const pair<int, int> x = pq.top();
            const int y = -x.second;
            if (m.count(y) && m[y] == x.first)
            {
                pq.pop();
                m.erase(y);
                return y;
            }
            else
            {
                pq.pop();
            }
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */