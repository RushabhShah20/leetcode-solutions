// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
class Spreadsheet {
    Map<String, Integer> ans = new HashMap<>();

    public Spreadsheet(int rows) {

    }

    public void setCell(String cell, int value) {
        ans.put(cell, value);
    }

    public void resetCell(String cell) {
        ans.remove(cell);
    }

    public int getValue(String formula) {
        int plusPos = formula.indexOf('+');
        String x = formula.substring(1, plusPos), y = formula.substring(plusPos + 1);
        if (!Character.isDigit(x.charAt(0)) && !Character.isDigit(y.charAt(0))) {
            return ans.getOrDefault(x, 0) + ans.getOrDefault(y, 0);
        } else if (!Character.isDigit(x.charAt(0)) && Character.isDigit(y.charAt(0))) {
            return ans.getOrDefault(x, 0) + Integer.parseInt(y);
        } else if (Character.isDigit(x.charAt(0)) && !Character.isDigit(y.charAt(0))) {
            return ans.getOrDefault(y, 0) + Integer.parseInt(x);
        } else {
            return Integer.parseInt(x) + Integer.parseInt(y);
        }
    }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet obj = new Spreadsheet(rows);
 * obj.setCell(cell,value);
 * obj.resetCell(cell);
 * int param_3 = obj.getValue(formula);
 */