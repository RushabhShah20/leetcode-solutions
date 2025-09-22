// Problem: Design a Number Container System
// Link to the problem: https://leetcode.com/problems/design-a-number-container-system/
class NumberContainers
{
public:
    map<int, set<int>> x;
    map<int, int> y;
    NumberContainers()
    {
    }

    void change(int index, int number)
    {
        x[y[index]].erase(index);
        y[index] = number;
        x[y[index]].insert(index);
    }

    int find(int number)
    {
        return x[number].size() == 0 ? -1 : *x[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */