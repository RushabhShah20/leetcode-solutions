// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
int compare(const void *a, const void *b)
{
    const int *taskA = *(const int **)a;
    const int *taskB = *(const int **)b;
    return (taskA[1] - taskA[0]) - (taskB[1] - taskB[0]);
}
int minimumEffort(int **tasks, int tasksSize, int *tasksColSize)
{
    qsort(tasks, tasksSize, sizeof(int *), compare);
    int ans = 0;
    for (int i = 0; i < tasksSize; i++)
    {
        ans = fmax(ans + tasks[i][0], tasks[i][1]);
    }
    return ans;
}