// Problem: Categorize Box According to Criteria
// Link to the problem: https://leetcode.com/problems/categorize-box-according-to-criteria/
class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        unsigned long long int volume = (unsigned long long int)(length) * (unsigned long long int)(width) * (unsigned long long int)(height);
        bool isBulky = ((length >= 10000 || width >= 10000 || height >= 10000) || (volume >= 1000000000)), isHeavy = mass >= 100;
        if (isBulky && isHeavy)
        {
            return "Both";
        }
        else if (isBulky && !isHeavy)
        {
            return "Bulky";
        }
        else if (!isBulky && isHeavy)
        {
            return "Heavy";
        }
        else
        {
            return "Neither";
        }
    }
};