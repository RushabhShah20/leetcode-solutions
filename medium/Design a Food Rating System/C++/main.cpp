// Problem: Design a Food Rating System
// Link to the problem: https://leetcode.com/problems/design-a-food-rating-system/
class FoodRatings
{
public:
    unordered_map<string, string> foodCuisine;
    unordered_map<string, int> foodRatings;
    unordered_map<string, set<pair<int, string>>> ans;
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            foodCuisine[foods[i]] = cuisines[i];
            foodRatings[foods[i]] = ratings[i];
            ans[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating)
    {
        string cuisine = foodCuisine[food];
        int oldRating = foodRatings[food];
        ans[cuisine].erase({-oldRating, food});
        ans[cuisine].insert({-newRating, food});
        foodRatings[food] = newRating;
    }

    string highestRated(string cuisine)
    {
        return ans[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */