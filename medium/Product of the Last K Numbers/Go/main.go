// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
type ProductOfNumbers struct {
	a []int
	n int
}

func Constructor() ProductOfNumbers {
	return ProductOfNumbers{
		a: []int{1},
		n: 0,
	}
}

func (this *ProductOfNumbers) Add(num int) {
	if num == 0 {
		this.a = []int{1}
		this.n = 0
	} else {
		this.a = append(this.a, this.a[this.n]*num)
		this.n++
	}
}

func (this *ProductOfNumbers) GetProduct(k int) int {
	var ans int
	if k > this.n {
		ans = 0
	} else {
		ans = this.a[this.n] / this.a[this.n-k]
	}
	return ans
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Add(num);
 * param_2 := obj.GetProduct(k);
 */
