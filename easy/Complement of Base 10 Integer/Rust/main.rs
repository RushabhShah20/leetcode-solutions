// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
impl Solution {
    pub fn to_binary(n: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        let mut num: i32 = n;
        while num > 0 {
            let rem = num % 2;
            ans.push(rem);
            num /= 2;
        }
        return ans;
    }

    pub fn complement(res: &mut Vec<i32>) -> Vec<i32> {
        for i in 0..res.len() {
            if res[i] == 1 {
                res[i] = 0;
            } else if res[i] == 0 {
                res[i] = 1;
            }
        }
        return res.clone();
    }

    pub fn bitwise_complement(n: i32) -> i32 {
        if n == 0 {
            return 1;
        } else {
            let mut ans: i32 = 0;
            let mut binary: Vec<i32> = Self::to_binary(n);
            let com: Vec<i32> = Self::complement(&mut binary);
            for i in 0..com.len() {
                ans += (2_i32.pow(i as u32)) * com[i];
            }
            return ans;
        }
    }
}
