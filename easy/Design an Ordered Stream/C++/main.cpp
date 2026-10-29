// Problem: Design an Ordered Stream
// Link to the problem: https://leetcode.com/problems/design-an-ordered-stream/
class OrderedStream
{
public:
    vector<string> s;
    int j = 0, m = 0;
    OrderedStream(int n)
    {
        s.resize(n);
        m = n;
    }

    vector<string> insert(int idKey, string value)
    {
        vector<string> ans;
        s[idKey - 1] = value;
        if (j == idKey - 1)
        {
            while (j < m && !s[j].empty())
            {
                ans.push_back(s[j]);
                j++;
            }
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
