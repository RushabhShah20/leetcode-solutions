// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
impl Solution {
    pub fn toBinary(mut n: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        while (n > 0) {
            let mut rem: i32 = n % 2;
            ans.push(rem);
            n /= 2;
        }
        return ans;
    }
    pub fn complement(mut res: Vec<i32>) -> Vec<i32> {
        for i in 0..res.len() {
            if (res[i] == 1) {
                res[i] = 0;
            } else if (res[i] == 0) {
                res[i] = 1;
            }
        }
        return res;
    }
    pub fn find_complement(num: i32) -> i32 {
        let mut ans: i32 = 0;
        let mut binary: Vec<i32> = Self::toBinary(num);
        let mut com: Vec<i32> = Self::complement(binary);
        for i in 0..com.len() {
            ans += (2_i32.pow(i as u32)) * (com[i]);
        }
        return ans;
    }
}
