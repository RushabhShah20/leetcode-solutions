double calculateTax(int **brackets, int bracketsSize, int *bracketsColSize, int income)
{
    double ans = 0;
    if (income >= brackets[0][0])
    {
        ans = ((brackets[0][0] * brackets[0][1]) / 100.0);
    }
    else
    {
        return ((income * brackets[0][1]) / 100.0);
    }
    for (int i = 1; i < bracketsSize; i++)
    {
        if (income >= (brackets[i][0]))
        {
            ans += (((brackets[i][0] - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
        }
        else
        {
            ans += (((income - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
            break;
        }
    }
    return ans;
}