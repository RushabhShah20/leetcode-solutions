// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers {
    private List<Integer> a = new ArrayList<>();
    private int n = 0;

    public ProductOfNumbers() {
        this.a.add(1);
        this.n = 0;
    }

    public void add(int num) {
        if (num == 0) {
            this.a.clear();
            this.a.add(1);
            this.n = 0;
        } else {
            this.a.add(this.a.get(n) * num);
            this.n++;
        }
    }

    public int getProduct(int k) {
        final int ans = k > n ? 0 : this.a.get(n) / this.a.get(n - k);
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */