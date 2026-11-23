// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
public class ProductOfNumbers
{
    private List<int> a;
    private int n;

    public ProductOfNumbers()
    {
        a = new List<int>();
        a.Add(1);
        n = 0;
    }

    public void Add(int num)
    {
        if (num == 0)
        {
            a = new List<int> { 1 };
            n = 0;
        }
        else
        {
            a.Add(a[n] * num);
            n++;
        }
    }

    public int GetProduct(int k)
    {
        int ans = k > n ? 0 : a[n] / a[n - k];
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.Add(num);
 * int param_2 = obj.GetProduct(k);
 */