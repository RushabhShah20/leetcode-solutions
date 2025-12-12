// Problem: Count Mentions Per User
// Link to the problem: https://leetcode.com/problems/count-mentions-per-user/
class Solution
{
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
    {
        sort(events.begin(), events.end(), [](const vector<string> &a, const vector<string> &b)
             {
            int c=stoi(a[1]),d=stoi(b[1]);
            if(c!=d){return c<d;}
            return a[0]=="OFFLINE"&&b[0]=="MESSAGE"; });
        vector<int> ans(numberOfUsers, 0), next(numberOfUsers, 0);
        for (const vector<string> &event : events)
        {
            int x = stoi(event[1]);
            if (event[0] == "MESSAGE")
            {
                if (event[2] == "ALL")
                {
                    for (int i = 0; i < numberOfUsers; i++)
                    {
                        ans[i]++;
                    }
                }
                else if (event[2] == "HERE")
                {
                    for (int i = 0; i < numberOfUsers; i++)
                    {
                        if (next[i] <= x)
                        {
                            ans[i]++;
                        }
                    }
                }
                else
                {
                    stringstream ss(event[2]);
                    string y;
                    while (getline(ss, y, ' '))
                    {
                        ans[stoi(y.substr(2))]++;
                    }
                }
            }
            else
            {
                next[stoi(event[2])] = x + 60;
            }
        }
        return ans;
    }
};