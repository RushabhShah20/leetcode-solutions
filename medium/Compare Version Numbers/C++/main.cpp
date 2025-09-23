// Problem: Compare Version Numbers
// Link to the problem: https://leetcode.com/problems/compare-version-numbers/
class Solution
{
public:
    vector<int> parseVersion(const string &version)
    {
        vector<int> revisions;
        stringstream ss(version);
        string revision;
        while (getline(ss, revision, '.'))
        {
            revisions.push_back(stoi(revision));
        }
        return revisions;
    }
    int compareVersion(string version1, string version2)
    {
        vector<int> x = parseVersion(version1), y = parseVersion(version2);
        int maxSize = max(x.size(), y.size());
        for (int i = 0; i < maxSize; i++)
        {
            int c = i < x.size() ? x[i] : 0;
            int d = i < y.size() ? y[i] : 0;
            if (c < d)
            {
                return -1;
            }
            else if (c > d)
            {
                return 1;
            }
        }
        return 0;
    }
};