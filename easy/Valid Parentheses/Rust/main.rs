// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
impl Solution {
    pub fn is_valid(s: String) -> bool {
        let n: usize = s.len();
        let mut st: Vec<u8> = Vec::new();
        let t = s.as_bytes();
        for i in 0..n {
            if (t[i] == b'(' || t[i] == b'{' || t[i] == b'[') {
                st.push(t[i]);
            } else {
                if (st.is_empty()) {
                    return false;
                }
                let x: u8 = st[st.len() - 1];
                let y: u8 = t[i];
                if ((x == b'(' && y == b')')
                    || (x == b'{' && y == b'}')
                    || (x == b'[' && y == b']'))
                {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        let ans: bool = st.is_empty();
        return ans;
    }
}
