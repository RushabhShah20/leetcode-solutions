// Problem: Filter Restaurants by Vegan-Friendly, Price and Distance
// Link to the problem: https://leetcode.com/problems/filter-restaurants-by-vegan-friendly-price-and-distance/
class Solution
{
public:
    vector<int> filterRestaurants(vector<vector<int>> &restaurants, int veganFriendly, int maxPrice, int maxDistance)
    {
        vector<vector<int>> filter;
        for (int i = restaurants.size() - 1; i >= 0; i--)
        {
            if ((veganFriendly <= restaurants[i][2]) && (maxPrice >= restaurants[i][3]) && (maxDistance >= restaurants[i][4]))
            {
                filter.push_back({restaurants[i][0], restaurants[i][1]});
            }
        }
        map<int, vector<int>> x;
        for (int i = 0; i < filter.size(); i++)
        {
            x[filter[i][1]].push_back(filter[i][0]);
        }
        vector<int> ans;
        for (auto i : x)
        {
            sort(i.second.begin(), i.second.end());
            for (int j = 0; j < i.second.size(); j++)
            {
                ans.push_back(i.second[j]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};