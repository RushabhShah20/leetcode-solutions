// Problem: Lexicographically Smallest String After Applying Operations
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-string-after-applying-operations/
class Solution
{
public:
    string findLexSmallestString(string s, int a, int b)
    {
        set<string> visited;
        string small = s;
        queue<string> q;
        q.push(s);
        visited.insert(s);
        while (!q.empty())
        {
            string curr = q.front();
            q.pop();
            if (curr < small)
            {
                small = curr;
            }
            string add = curr;
            for (int i = 1; i < add.size(); i += 2)
            {
                add[i] = (((add[i] - '0' + a) % 10) + '0');
            }
            if (!visited.count(add))
            {
                visited.insert(add);
                q.push(add);
            }
            string rotated = curr.substr(curr.size() - b) + curr.substr(0, curr.size() - b);
            if (!visited.count(rotated))
            {
                visited.insert(rotated);
                q.push(rotated);
            }
        }
        return small;
    }
};