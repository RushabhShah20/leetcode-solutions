// Problem: Kth Largest Element in a Stream
// Link to the problem: https://leetcode.com/problems/kth-largest-element-in-a-stream/
class KthLargest
{
public:
    vector<int> x;
    int y;
    KthLargest(int k, vector<int> &nums)
    {
        x = nums;
        sort(x.begin(), x.end(), greater<int>());
        y = k;
    }

    int add(int val)
    {
        bool z = false;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] <= val)
            {
                x.insert(x.begin() + i, val);
                z = true;
                break;
            }
        }
        if (z == false)
        {
            x.push_back(val);
        }
        return x[y - 1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */