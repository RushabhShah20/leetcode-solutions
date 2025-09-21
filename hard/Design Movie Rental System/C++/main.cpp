// Problem: Design Movie Rental System
// Link to the problem: https://leetcode.com/problems/design-movie-rental-system/
class MovieRentingSystem
{
public:
    map<int, set<pair<int, int>>> shops;
    set<tuple<int, int, int>> rentals;
    map<pair<int, int>, int> prices;
    MovieRentingSystem(int n, vector<vector<int>> &entries)
    {
        for (vector<int> entry : entries)
        {
            prices[{entry[0], entry[1]}] = entry[2];
            shops[entry[1]].insert({entry[2], entry[0]});
        }
    }

    vector<int> search(int movie)
    {
        vector<int> ans;
        if (shops.count(movie))
        {
            set<pair<int, int>> &x = shops.at(movie);
            int count = 0;
            for (const pair<int, int> &y : x)
            {
                if (count >= 5)
                {
                    break;
                }
                ans.push_back(y.second);
                count++;
            }
        }
        return ans;
    }

    void rent(int shop, int movie)
    {
        int price = prices.at({shop, movie});
        shops.at(movie).erase({price, shop});
        rentals.insert({price, shop, movie});
    }

    void drop(int shop, int movie)
    {
        int price = prices.at({shop, movie});
        rentals.erase({price, shop, movie});
        shops.at(movie).insert({price, shop});
    }

    vector<vector<int>> report()
    {
        vector<vector<int>> ans;
        int count = 0;
        for (const tuple<int, int, int> &x : rentals)
        {
            if (count >= 5)
            {
                break;
            }
            ans.push_back({get<1>(x), get<2>(x)});
            count++;
        }
        return ans;
    }
};

/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */