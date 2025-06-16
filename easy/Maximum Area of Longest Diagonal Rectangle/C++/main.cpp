// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        vector<int> diagonalSquares(dimensions.size());
        for (int i = 0; i < dimensions.size(); i++)
        {
            diagonalSquares[i] = ((dimensions[i][0] * dimensions[i][0]) + (dimensions[i][1] * dimensions[i][1]));
        }
        vector<int> area;
        int maxDiagonal = *max_element(diagonalSquares.begin(), diagonalSquares.end());
        for (int i = 0; i < dimensions.size(); i++)
        {
            if (diagonalSquares[i] == maxDiagonal)
            {
                area.push_back(dimensions[i][0] * dimensions[i][1]);
            }
        }
        return *max_element(area.begin(), area.end());
    }
};