// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
struct ProductOfNumbers {
    a: Vec<i32>, 
    n: usize,   
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl ProductOfNumbers {

    fn new() -> Self {
        ProductOfNumbers {
            a: vec![1],
            n: 0,
        }
    }
    
    fn add(&mut self, num: i32) {
        if num == 0 {
            self.a = vec![1];
            self.n = 0;
        } else {
            let last: i32 = self.a[self.n];
            self.a.push(last * num);
            self.n += 1;
        }
    }
    
    fn get_product(&self, k: i32) -> i32 {
        let k: usize = k as usize;
        let ans: i32 = if k > self.n {
            0
        } else {
            self.a[self.n] / self.a[self.n - k]
        };
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * let obj = ProductOfNumbers::new();
 * obj.add(num);
 * let ret_2: i32 = obj.get_product(k);
 */