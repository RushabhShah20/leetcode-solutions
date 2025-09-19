// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
public class Spreadsheet
{
    Dictionary<string, int> ans = new Dictionary<string, int>();

    public Spreadsheet(int rows)
    {

    }

    public void SetCell(string cell, int value)
    {
        ans[cell] = value;
    }

    public void ResetCell(string cell)
    {
        ans[cell] = 0;
    }

    public int GetValue(string formula)
    {
        int plusPos = formula.IndexOf('+');
        String x = formula.Substring(1, plusPos - 1), y = formula.Substring(plusPos + 1);
        if (!char.IsDigit(x[0]) && !char.IsDigit(y[0]))
        {
            return (ans.ContainsKey(x) ? ans[x] : 0) + (ans.ContainsKey(y) ? ans[y] : 0);
        }
        else if (!char.IsDigit(x[0]) && char.IsDigit(y[0]))
        {
            return (ans.ContainsKey(x) ? ans[x] : 0) + int.Parse(y);
        }
        else if (char.IsDigit(x[0]) && !char.IsDigit(y[0]))
        {
            return (ans.ContainsKey(y) ? ans[y] : 0) + int.Parse(x);
        }
        else
        {
            return int.Parse(x) + int.Parse(y);
        }
    }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet obj = new Spreadsheet(rows);
 * obj.SetCell(cell,value);
 * obj.ResetCell(cell);
 * int param_3 = obj.GetValue(formula);
 */