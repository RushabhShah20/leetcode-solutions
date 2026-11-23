// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers {
  List<int> a = [1];
  int n = 0;
  ProductOfNumbers() {}

  void add(int num) {
    if (num == 0) {
      a = [1];
      n = 0;
    } else {
      a.add(a[n] * num);
      n++;
    }
  }

  int getProduct(int k) {
    final int ans = k > n ? 0 : a[n] ~/ a[n - k];
    return ans;
  }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = ProductOfNumbers();
 * obj.add(num);
 * int param2 = obj.getProduct(k);
 */
