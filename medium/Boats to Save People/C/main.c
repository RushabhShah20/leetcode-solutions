// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int numRescueBoats(int *people, int peopleSize, int limit)
{
    qsort(people, peopleSize, sizeof(int), comp);
    int ans = 0, n = peopleSize, i = 0, j = n - 1;
    while (i <= j)
    {
        if (people[i] + people[j] <= limit)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
        ans++;
    }
    return ans;
}