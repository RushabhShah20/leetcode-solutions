// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
int comp(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
int minimumBoxes(int *apple, int appleSize, int *capacity, int capacitySize)
{
    int ans = 0;
    qsort(capacity, capacitySize, sizeof(int), comp);
    int total = 0;
    for (int i = 0; i < appleSize; i++)
    {
        total += apple[i];
    }
    for (int i = 0; i < capacitySize; i++)
    {
        if (total >= capacity[i])
        {
            total -= capacity[i];
            ans++;
        }
        else
        {
            if (total != 0)
            {
                ans++;
            }
            break;
        }
    }
    return ans;
}