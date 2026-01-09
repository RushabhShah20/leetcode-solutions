// Problem: Find Kth Largest XOR Coordinate Value
// Link to the problem: https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/
class Solution
{
public:
    int kthLargestValue(vector<vector<int>> &matrix, int k)
    {
        const int n = matrix.size(), m = matrix[0].size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i != 0)
                {
                    matrix[i][j] ^= matrix[i - 1][j];
                }
                if (j != 0)
                {
                    matrix[i][j] ^= matrix[i][j - 1];
                }
                if (i != 0 && j != 0)
                {
                    matrix[i][j] ^= matrix[i - 1][j - 1];
                }
                pq.push(matrix[i][j]);
                if (pq.size() > k)
                {
                    pq.pop();
                }
            }
        }
        const int ans = pq.top();
        return ans;
    }
};