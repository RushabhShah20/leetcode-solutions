// Problem: Implement Router
// Link to the problem: https://leetcode.com/problems/implement-router/
class Router
{
public:
    int limit = 0;
    set<vector<int>> packets;
    unordered_map<int, int> removedPackets;
    unordered_map<int, vector<int>> a;
    queue<vector<int>> ans;
    Router(int memoryLimit)
    {
        limit = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp)
    {
        if (packets.find({source, destination, timestamp}) != packets.end())
        {
            return false;
        }
        if (ans.size() > 0)
        {
            if (limit == ans.size())
            {
                vector<int> b = ans.front();
                packets.erase(b);
                removedPackets[b[1]]++;
                ans.pop();
            }
        }
        ans.push({source, destination, timestamp});
        a[destination].push_back(timestamp);
        packets.insert({source, destination, timestamp});
        return true;
    }

    vector<int> forwardPacket()
    {
        if (ans.size() > 0)
        {
            vector<int> b = ans.front();
            packets.erase(b);
            removedPackets[b[1]]++;
            ans.pop();
            return b;
        }
        return {};
    }

    int getCount(int destination, int startTime, int endTime)
    {
        if (a.find(destination) == a.end())
        {
            return 0;
        }
        int x = removedPackets[destination];
        auto it1 = lower_bound(a[destination].begin() + x, a[destination].end(), startTime);
        auto it2 = upper_bound(a[destination].begin() + x, a[destination].end(), endTime);
        int z = int(it2 - it1);
        return z;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */