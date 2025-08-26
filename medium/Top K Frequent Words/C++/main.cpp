// Problem: Top K Frequent Words
// Link to the problem: https://leetcode.com/problems/top-k-frequent-words/
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        map<string, int> x;
        for (int i = 0; i < words.size(); i++)
        {
            x[words[i]]++;
        }
        map<int, vector<string>> y;
        for (auto i : x)
        {
            y[i.second].push_back(i.first);
        }
        for (auto &i : y)
        {
            sort(i.second.begin(), i.second.end(), greater<string>());
        }
        vector<string> b;
        for (auto i : y)
        {
            b.insert(b.end(), i.second.begin(), i.second.end());
        }
        reverse(b.begin(), b.end());
        vector<string> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(b[i]);
        }
        return ans;
    }
};