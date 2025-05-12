// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
class Solution {
  List<int> toBinary(int n) {
    List<int> ans = new List.empty(growable: true);
    while (n > 0) {
      int rem = n % 2;
      ans.add(rem);
      n ~/= 2;
    }
    return ans;
  }

  List<int> complement(List<int> res) {
    for (int i = 0; i < res.length; i++) {
      if (res[i] == 1) {
        res[i] = 0;
      } else if (res[i] == 0) {
        res[i] = 1;
      }
    }
    return res;
  }

  int findComplement(int num) {
    int ans = 0;
    List<int> binary = toBinary(num);
    List<int> com = complement(binary);
    for (int i = 0; i < com.length; i++) {
      ans += ((pow(2, i)).toInt() * com[i]);
    }
    return ans;
  }
}
