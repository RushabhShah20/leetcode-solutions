// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
int dayOfTheYear(const char *date, const int *a)
{
    const int x = (date[0] - '0') * 10 + date[1] - '0', y = (date[3] - '0') * 10 + date[4] - '0';
    const int ans = a[x - 1] + y;
    return ans;
}
int countDaysTogether(char *arriveAlice, char *leaveAlice, char *arriveBob, char *leaveBob)
{
    const int x[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y[13];
    y[0] = 0;
    for (int i = 1; i < 13; i++)
    {
        y[i] = y[i - 1] + x[i - 1];
    }
    const int a = dayOfTheYear(arriveAlice, y), b = dayOfTheYear(leaveAlice, y), c = dayOfTheYear(arriveBob, y), d = dayOfTheYear(leaveBob, y);
    const int ans = fmax(0, fmin(b, d) - fmax(a, c) + 1);
    return ans;
}