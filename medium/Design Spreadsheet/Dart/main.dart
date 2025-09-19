// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/

class Spreadsheet {
  Map<String, int> ans = new Map();
  Spreadsheet(int rows) {}

  void setCell(String cell, int value) {
    ans[cell] = value;
  }

  void resetCell(String cell) {
    ans.remove(cell);
  }

  int getValue(String formula) {
    int plusPos = formula.indexOf('+');
    String x = formula.substring(1, plusPos),
        y = formula.substring(plusPos + 1);
    bool xIsDigit = x.isNotEmpty && '0123456789'.contains(x[0]);
    bool yIsDigit = y.isNotEmpty && '0123456789'.contains(y[0]);
    if (!xIsDigit && !yIsDigit) {
      return (ans[x] ?? 0) + (ans[y] ?? 0);
    } else if (!xIsDigit && yIsDigit) {
      return (ans[x] ?? 0) + int.parse(y);
    } else if (xIsDigit && !yIsDigit) {
      return (ans[y] ?? 0) + int.parse(x);
    } else {
      int a = int.parse(x), b = int.parse(y);
      return a + b;
    }
  }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet obj = Spreadsheet(rows);
 * obj.setCell(cell,value);
 * obj.resetCell(cell);
 * int param3 = obj.getValue(formula);
 */
