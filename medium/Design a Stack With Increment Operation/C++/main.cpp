// Problem: Design a Stack With Increment Operation
// Link to the problem: https://leetcode.com/problems/design-a-stack-with-increment-operation/
class CustomStack
{
public:
    vector<int> ans;
    int n = 0;
    CustomStack(int maxSize)
    {
        n = maxSize;
    }

    void push(int x)
    {
        if (ans.size() < n)
        {
            ans.push_back(x);
        }
    }

    int pop()
    {
        if (ans.empty())
        {
            return -1;
        }
        else
        {
            int x = ans.back();
            ans.pop_back();
            return x;
        }
    }

    void increment(int k, int val)
    {
        for (int i = 0; i < min(k, (int)ans.size()); i++)
        {
            ans[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */