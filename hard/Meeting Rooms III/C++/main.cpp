// Problem: Meeting Rooms III
// Link to the problem: https://leetcode.com/problems/meeting-rooms-iii/
class Solution
{
public:
    int mostBooked(int n, vector<vector<int>> &meetings)
    {
        sort(meetings.begin(), meetings.end());
        vector<long long> t(n, 0);
        vector<int> count(n, 0);
        for (const vector<int> &meeting : meetings)
        {
            int start = meeting[0], end = meeting[1], minR = -1;
            long long minT = LLONG_MAX;
            bool x = false;
            for (int i = 0; i < n; i++)
            {
                if (t[i] <= start)
                {
                    x = true;
                    count[i]++;
                    t[i] = end;
                    break;
                }
                if (minT > t[i])
                {
                    minT = t[i];
                    minR = i;
                }
            }
            if (x == false)
            {
                t[minR] += (end - start);
                count[minR]++;
            }
        }
        int ans = -1, maxM = -1;
        for (int i = 0; i < n; i++)
        {
            if (count[i] > maxM)
            {
                maxM = count[i];
                ans = i;
            }
        }
        return ans;
    }
};