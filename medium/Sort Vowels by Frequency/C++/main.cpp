// Problem: Sort Vowels by Frequency
// Link to the problem: https://leetcode.com/problems/sort-vowels-by-frequency/
class Solution
{
public:
    bool isVowel(const char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string sortVowels(string s)
    {
        vector<pair<int, int>> m(5);
        for (int i = 0; i < 5; i++)
        {
            m[i].first = 0;
            m[i].second = INT_MAX;
        }
        const int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]))
            {
                if (s[i] == 'a')
                {
                    m[0].first++;
                    m[0].second = min(m[0].second, i);
                }
                else if (s[i] == 'e')
                {
                    m[1].first++;
                    m[1].second = min(m[1].second, i);
                }
                else if (s[i] == 'i')
                {
                    m[2].first++;
                    m[2].second = min(m[2].second, i);
                }
                else if (s[i] == 'o')
                {
                    m[3].first++;
                    m[3].second = min(m[3].second, i);
                }
                else if (s[i] == 'u')
                {
                    m[4].first++;
                    m[4].second = min(m[4].second, i);
                }
            }
        }
        sort(m.begin(), m.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {if (a.first != b.first){return a.first > b.first;}return a.second < b.second; });
        int j = 0;
        string ans = s;
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]))
            {
                while (j < 5 && m[j].first == 0)
                {
                    j++;
                }
                if (j < 5)
                {
                    ans[i] = s[m[j].second];
                    m[j].first--;
                }
            }
        }
        return ans;
    }
};