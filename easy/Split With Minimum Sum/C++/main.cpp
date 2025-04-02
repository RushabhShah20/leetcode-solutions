// Problem: Split With Minimum Sum
// Link to the problem: https://leetcode.com/problems/split-with-minimum-sum/
class Solution
{
public:
    vector<int> split(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 10);
            num /= 10;
        }
        return result;
    }
    int getNum(vector<int> digits)
    {
        int result = 0;
        for (int i = 0; i < digits.size(); i++)
        {
            result += digits[i] * pow(10, i);
        }
        return result;
    }
    int splitNum(int num)
    {
        vector<int> digits = split(num);
        vector<int> odd, even;
        sort(digits.begin(), digits.end());
        for (int i = 0; i < digits.size(); i++)
        {
            if (i % 2 == 0)
            {
                odd.push_back(digits[i]);
            }
            else
            {
                even.push_back(digits[i]);
            }
        }
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        reverse(even.begin(), even.end());
        int odd_num = getNum(odd);
        int even_num = getNum(even);
        return odd_num + even_num;
    }
};