// Problem: Maximum Average Pass Ratio
// Link to the problem: https://leetcode.com/problems/maximum-average-pass-ratio/
class Solution
{
public:
    double maxAverageRatio(vector<vector<int>> &classes, int extraStudents)
    {
        auto profit = [](int pass, int total)
        {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };
        priority_queue<pair<double, int>> pq;
        for (int i = 0; i < classes.size(); i++)
        {
            pq.push({profit(classes[i][0], classes[i][1]), i});
        }
        for (int i = 0; i < extraStudents; i++)
        {
            auto [gain, idx] = pq.top();
            pq.pop();
            classes[idx][0]++;
            classes[idx][1]++;
            pq.push({profit(classes[idx][0], classes[idx][1]), idx});
        }
        double ans = 0;
        for (int i = 0; i < classes.size(); i++)
        {
            ans += ((double)(classes[i][0]) / (classes[i][1]));
        }
        return ans / classes.size();
    }
};