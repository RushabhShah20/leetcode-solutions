// Problem: Rectangle Overlap
// Link to the problem: https://leetcode.com/problems/rectangle-overlap/
bool isRectangleOverlap(int *rec1, int rec1Size, int *rec2, int rec2Size)
{
    const bool ans = (fmin(rec1[2], rec2[2]) > fmax(rec1[0], rec2[0])) && (fmin(rec1[3], rec2[3]) > fmax(rec1[1], rec2[1]));
    return ans;
}