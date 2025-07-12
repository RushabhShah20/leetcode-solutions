// Problem: Design HashSet
// Link to the problem: https://leetcode.com/problems/design-hashset/
class MyHashSet
{
public:
    vector<int> ans;
    MyHashSet()
    {
    }

    void add(int key)
    {
        if (ans.empty())
        {
            ans.push_back(key);
        }
        else if (find(ans.begin(), ans.end(), key) == ans.end())
        {
            ans.push_back(key);
        }
    }

    void remove(int key)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == key)
            {
                ans.erase(ans.begin() + i);
            }
        }
    }

    bool contains(int key)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == key)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */