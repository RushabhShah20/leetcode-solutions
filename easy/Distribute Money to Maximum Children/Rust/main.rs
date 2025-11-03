// Problem: Distribute Money to Maximum Children
// Link to the problem: https://leetcode.com/problems/distribute-money-to-maximum-children/
impl Solution {
    pub fn dist_money(mut money: i32, mut children: i32) -> i32 {
        if (money < children) {
            return -1;
        } else {
            let mut ans: i32 = 0;
            let mut a: Vec<i32> = vec![1; children as usize];
            money -= children;
            for i in 0..(children as usize) {
                if (money < 7) {
                    if (money == 3) {
                        if (i == ((children - 1) as usize)) {
                            a[i - 1] += 1;
                        } else {
                            a[i + 1] += 1;
                        }
                        a[i] += 2;
                    } else {
                        a[i] += money;
                    }
                    money = 0;
                    break;
                } else {
                    a[i] += 7;
                    money -= 7;
                }
            }
            if (money != 0) {
                a[(children - 1) as usize] += money;
            }
            for i in a {
                if (i == 8) {
                    ans += 1;
                }
            }
            return ans;
        }
    }
}
