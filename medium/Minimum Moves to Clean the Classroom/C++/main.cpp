// Problem: Minimum Moves to Clean the Classroom
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-clean-the-classroom/
class Solution
{
public:
    int minMoves(vector<string> &classroom, int energy)
    {
        const vector<int> dx = {0, 1, 0, -1}, dy = {1, 0, -1, 0};
        const int m = classroom.size(), n = classroom[0].size();
        vector<vector<int>> a(m, vector<int>(n));
        int sx, sy, z = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (classroom[i][j] == 'S')
                {
                    sx = i;
                    sy = j;
                }
                else if (classroom[i][j] == 'L')
                {
                    a[i][j] = 1 << z;
                    z++;
                }
            }
        }
        vector<vector<vector<int>>> b(m, vector<vector<int>>(n, vector<int>(1 << z, -1)));
        b[sx][sy][0] = energy;
        queue<vector<int>> q;
        q.push({sx, sy, 0, energy, 0});
        while (!q.empty())
        {
            vector<int> t = q.front();
            q.pop();
            if (t[2] == (1 << z) - 1)
            {
                return t[4];
            }
            if (t[3] == 0)
            {
                continue;
            }
            for (int i = 0; i < 4; i++)
            {
                int nx = t[0] + dx[i];
                int ny = t[1] + dy[i];
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || classroom[nx][ny] == 'X')
                {
                    continue;
                }
                int ne = classroom[nx][ny] == 'R' ? energy : t[3] - 1;
                int nmask = t[2] | a[nx][ny];
                if (ne > b[nx][ny][nmask])
                {
                    b[nx][ny][nmask] = ne;
                    q.push({nx, ny, nmask, ne, t[4] + 1});
                }
            }
        }
        return -1;
    }
};