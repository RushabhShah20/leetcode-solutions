// Problem: Design HashMap
// Link to the problem: https://leetcode.com/problems/design-hashmap/
class MyHashMap
{
public:
    vector<vector<int>> ans;
    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        int x = false;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i][0] == key)
            {
                x = true;
                ans[i][1] = value;
            }
        }
        if (x == false)
        {
            ans.push_back({key, value});
        }
    }

    int get(int key)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i][0] == key)
            {
                return ans[i][1];
            }
        }
        return -1;
    }

    void remove(int key)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i][0] == key)
            {
                ans.erase(ans.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */