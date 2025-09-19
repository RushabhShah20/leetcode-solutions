// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
class Spreadsheet
{
public:
    map<string, int> ans;
    Spreadsheet(int rows)
    {
    }

    void setCell(string cell, int value)
    {
        ans[cell] = value;
    }

    void resetCell(string cell)
    {
        ans[cell] = 0;
    }

    int getValue(string formula)
    {
        int plusPos = formula.find('+');
        string x = formula.substr(1, plusPos - 1), y = formula.substr(plusPos + 1, formula.size() - 1 - plusPos);
        if (!isdigit(x[0]) && !isdigit(y[0]))
        {
            return ans[x] + ans[y];
        }
        else if (!isdigit(x[0]) && isdigit(y[0]))
        {
            return ans[x] + stoi(y);
        }
        else if (isdigit(x[0]) && !isdigit(y[0]))
        {
            return ans[y] + stoi(x);
        }
        else
        {
            int a = stoi(x), b = stoi(y);
            return a + b;
        }
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */