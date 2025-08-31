// Problem: Find The Least Frequent Digit
// Link to the problem: https://leetcode.com/problems/find-the-least-frequent-digit/
class Solution
{
public:
    int getLeastFrequentDigit(int n)
    {
        string s = to_string(n);
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            y[i.second].push_back((i.first - '0'));
        }
        int minFreq = INT_MAX;
        for (auto i : y)
        {
            minFreq = min(i.first, minFreq);
        }
        vector<int> a = y[minFreq];
        sort(a.begin(), a.end());
        return a.front();
    }
};