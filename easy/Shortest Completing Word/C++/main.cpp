// Problem: Shortest Completing Word
// Link to the problem: https://leetcode.com/problems/shortest-completing-word/
class Solution
{
public:
    string shortestCompletingWord(string licensePlate, vector<string> &words)
    {
        const int n = words.size(), m = licensePlate.size();
        vector<int> a(26);
        for (int i = 0; i < m; i++)
        {
            if (islower(licensePlate[i]))
            {
                a[licensePlate[i] - 'a']++;
            }
            if (isupper(licensePlate[i]))
            {
                a[licensePlate[i] - 'A']++;
            }
        }
        vector<string> x;
        int z = 16;
        for (int i = 0; i < n; i++)
        {
            const int k = words[i].size();
            vector<int> b(26);
            for (int j = 0; j < k; j++)
            {
                b[words[i][j] - 'a']++;
            }
            bool y = true;
            for (int j = 0; j < 26; j++)
            {
                if (a[j] > b[j])
                {
                    y = false;
                    break;
                }
            }
            if (y)
            {
                x.push_back(words[i]);
                z = min(z, k);
            }
        }
        const int p = x.size();
        for (int i = 0; i < p; i++)
        {
            if (x[i].size() == z)
            {
                return x[i];
            }
        }
        return "";
    }
};