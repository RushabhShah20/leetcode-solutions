// Problem: Coupon Code Validator
// Link to the problem: https://leetcode.com/problems/coupon-code-validator/
class Solution
{
public:
    bool isValid(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || (s[i] == '_')))
            {
                return false;
            }
        }
        return true;
    }
    vector<string> validateCoupons(vector<string> &code, vector<string> &businessLine, vector<bool> &isActive)
    {
        vector<string> electronics, grocery, pharmacy, restaurant, ans;
        int n = code.size();
        for (int i = 0; i < n; i++)
        {
            if (isActive[i] == false)
            {
                continue;
            }
            else if (code[i].empty())
            {
                continue;
            }
            else if (!isValid(code[i]))
            {
                continue;
            }
            else
            {
                if (businessLine[i] == "electronics")
                {
                    electronics.push_back(code[i]);
                }
                else if (businessLine[i] == "grocery")
                {
                    grocery.push_back(code[i]);
                }
                else if (businessLine[i] == "pharmacy")
                {
                    pharmacy.push_back(code[i]);
                }
                else if (businessLine[i] == "restaurant")
                {
                    restaurant.push_back(code[i]);
                }
            }
        }
        sort(electronics.begin(), electronics.end());
        sort(grocery.begin(), grocery.end());
        sort(pharmacy.begin(), pharmacy.end());
        sort(restaurant.begin(), restaurant.end());
        ans.insert(ans.end(), electronics.begin(), electronics.end());
        ans.insert(ans.end(), grocery.begin(), grocery.end());
        ans.insert(ans.end(), pharmacy.begin(), pharmacy.end());
        ans.insert(ans.end(), restaurant.begin(), restaurant.end());
        return ans;
    }
};