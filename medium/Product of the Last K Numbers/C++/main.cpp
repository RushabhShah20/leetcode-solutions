// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers
{
public:
    vector<int> a;
    int n = 0;
    ProductOfNumbers()
    {
        a.push_back(1);
        n = 0;
    }

    void add(int num)
    {
        if (num == 0)
        {
            a = {1};
            n = 0;
        }
        else
        {
            a.push_back(a[n] * num);
            n++;
        }
    }

    int getProduct(int k)
    {
        const int ans = k > n ? 0 : a[n] / a[n - k];
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */