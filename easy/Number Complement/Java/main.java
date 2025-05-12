// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
class Solution {
    List<Integer> toBinary(int n) {
        List<Integer> ans = new ArrayList<>();
        while (n > 0) {
            int rem = n % 2;
            ans.add(rem);
            n /= 2;
        }
        return ans;
    }

    List<Integer> complement(List<Integer> res) {
        for (int i = 0; i < res.size(); i++) {
            if (res.get(i) == 1) {
                res.set(i, 0);
            } else if (res.get(i) == 0) {
                res.set(i, 1);
            }
        }
        return res;
    }

    public int findComplement(int num) {
        int ans = 0;
        List<Integer> binary = toBinary(num);
        List<Integer> com = complement(binary);
        for (int i = 0; i < com.size(); i++) {
            ans += Math.pow(2, i) * com.get(i);
        }
        return ans;
    }
}