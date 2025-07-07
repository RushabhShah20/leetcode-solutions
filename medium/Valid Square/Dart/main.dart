// Problem: Valid Square
// Link to the problem: https://leetcode.com/problems/valid-square/
class Solution {
  bool validSquare(List<int> p1, List<int> p2, List<int> p3, List<int> p4) {
    int ab = pow((p1[0] - p2[0]), 2).toInt() + pow((p1[1] - p2[1]), 2).toInt();
    int bc = pow((p1[0] - p3[0]), 2).toInt() + pow((p1[1] - p3[1]), 2).toInt();
    int cd = pow((p1[0] - p4[0]), 2).toInt() + pow((p1[1] - p4[1]), 2).toInt();
    int da = pow((p2[0] - p3[0]), 2).toInt() + pow((p2[1] - p3[1]), 2).toInt();
    int ac = pow((p2[0] - p4[0]), 2).toInt() + pow((p2[1] - p4[1]), 2).toInt();
    int bd = pow((p3[0] - p4[0]), 2).toInt() + pow((p3[1] - p4[1]), 2).toInt();

    List<int> sides = [ab, bc, cd, da, ac, bd];
    Map<int, int> x = {};

    for (int i = 0; i < sides.length; i++) {
      x[sides[i]] = (x[sides[i]] ?? 0) + 1;
    }

    Map<int, List<int>> y = {};
    for (var entry in x.entries) {
      for (int j = 0; j < entry.value; j++) {
        y[entry.value] = y[entry.value] ?? [];
        y[entry.value]!.add(entry.key);
      }
    }

    if (y.length != 2) {
      return false;
    } else {
      List<int> diagonals = [];
      List<int> lengths = [];

      for (var entry in y.entries) {
        if (entry.value.length == 4) {
          lengths = entry.value;
        }
        if (entry.value.length == 2) {
          diagonals = entry.value;
        }
      }

      if (diagonals.isEmpty || lengths.isEmpty) {
        return false;
      } else {
        if (diagonals[0] != diagonals[1]) {
          return false;
        } else {
          for (int i = 0; i < lengths.length - 1; i++) {
            if (lengths[i] != lengths[i + 1]) {
              return false;
            }
          }
          if (lengths[0] + lengths[0] != diagonals[0]) {
            return false;
          } else {
            return true;
          }
        }
      }
    }
  }
}
