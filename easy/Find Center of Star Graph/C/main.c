// Problem: Find Center of Star Graph
// Link to the problem: https://leetcode.com/problems/find-center-of-star-graph/
int findCenter(int **edges, int edgesSize, int *edgesColSize)
{
    int a = edges[0][1];
    int b = edges[0][0];
    if (edges[1][1] == a || edges[1][0] == a)
    {
        return a;
    }
    else
    {
        return b;
    }
}