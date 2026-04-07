// Problem: Walking Robot Simulation II
// Link to the problem: https://leetcode.com/problems/walking-robot-simulation-ii/
class Robot
{
public:
    int j;
    bool x;
    vector<pair<int, int>> pos;
    vector<int> dirs;
    const vector<string> directions = {"East", "North", "West", "South"};
    Robot(int width, int height)
    {
        x = false;
        j = 0;
        for (int i = 0; i < width; i++)
        {
            pos.push_back({i, 0});
            dirs.push_back(0);
        }
        for (int i = 1; i < height; i++)
        {
            pos.push_back({width - 1, i});
            dirs.push_back(1);
        }
        for (int i = width - 2; i >= 0; i--)
        {
            pos.push_back({i, height - 1});
            dirs.push_back(2);
        }
        for (int i = height - 2; i > 0; i--)
        {
            pos.push_back({0, i});
            dirs.push_back(3);
        }
        dirs[0] = 3;
    }

    void step(int num)
    {
        x = true;
        j = (j + num) % pos.size();
    }

    vector<int> getPos()
    {
        const vector<int> ans = {pos[j].first, pos[j].second};
        return ans;
    }

    string getDir()
    {
        if (!x)
        {
            return "East";
        }
        return directions[dirs[j]];
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */