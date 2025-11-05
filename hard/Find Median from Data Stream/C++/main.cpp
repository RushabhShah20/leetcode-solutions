// Problem: Find Median from Data Stream
// Link to the problem: https://leetcode.com/problems/find-median-from-data-stream/
class MedianFinder
{
public:
    multiset<int> s;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        s.insert(num);
    }

    double findMedian()
    {
        int n = s.size();
        if (n % 2 == 0)
        {
            auto it = s.begin();
            auto x = next(it, n / 2);
            auto y = prev(x, 1);
            double ans = (((double)(*x) + (double)(*y)) / (double)(2));
            return ans;
        }
        else
        {
            auto it = s.begin();
            auto x = next(it, n / 2);
            double ans = ((double)(*x));
            return ans;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */