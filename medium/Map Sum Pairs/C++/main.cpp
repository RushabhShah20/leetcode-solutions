// Problem: Map Sum Pairs
// Link to the problem: https://leetcode.com/problems/map-sum-pairs/
class MapSum
{
public:
    map<string, int> x;
    MapSum()
    {
    }

    void insert(string key, int val)
    {
        x[key] = val;
    }

    int sum(string prefix)
    {
        int ans = 0;
        for (pair<string, int> i : x)
        {
            if (i.first.find(prefix) == 0)
            {
                ans += i.second;
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */