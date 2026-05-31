// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

bool asteroidsDestroyed(int mass, int *asteroids, int asteroidsSize)
{
    const int n = asteroidsSize;
    long long x = mass;
    qsort(asteroids, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        if (asteroids[i] > x)
        {
            return false;
        }
        x += asteroids[i];
    }
    return true;
}