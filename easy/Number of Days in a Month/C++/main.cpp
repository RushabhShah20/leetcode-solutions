// Problem: Number of Days in a Month
// Link to the problem: https://leetcode.com/problems/number-of-days-in-a-month/
class Solution
{
public:
    int numberOfDays(int year, int month)
    {
        unordered_map<int, int> m = {{1, 31}, {2, (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
        return m[month];
    }
};