// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
bool rotateString(char *s, char *goal)
{
    const int n = strlen(s), m = strlen(goal);
    if (n != m)
    {
        return false;
    }
    char doubled[2 * n + 1];
    strcpy(doubled, s);
    strcat(doubled, s);
    const bool ans = strstr(doubled, goal) != NULL;
    return ans;
}