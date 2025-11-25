// Problem: Flood Fill
// Link to the problem: https://leetcode.com/problems/flood-fill/
class Solution
{
public:
    void solve(vector<vector<int>> &image, int sr, int sc, int first, int last)
    {
        if (sr >= image.size() || sr < 0 || sc >= image[0].size() || sc < 0 || image[sr][sc] != first || image[sr][sc] == last)
        {
            return;
        }
        image[sr][sc] = last;
        solve(image, sr - 1, sc, first, last);
        solve(image, sr + 1, sc, first, last);
        solve(image, sr, sc - 1, first, last);
        solve(image, sr, sc + 1, first, last);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int first = image[sr][sc];
        solve(image, sr, sc, first, color);
        return image;
    }
};