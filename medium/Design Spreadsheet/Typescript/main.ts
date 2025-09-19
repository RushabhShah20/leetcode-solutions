// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
class Spreadsheet {
    ans: Map<string, number> = new Map();
    constructor(rows: number) {
    }

    setCell(cell: string, value: number): void {
        this.ans.set(cell, value);
    }

    resetCell(cell: string): void {
        this.ans.delete(cell);
    }

    getValue(formula: string): number {
        let plusPos: number = formula.indexOf('+');
        let x: string = formula.substring(1, plusPos), y = formula.substring(plusPos + 1);
        if (isNaN(Number(x.charAt(0))) && isNaN(Number(y.charAt(0)))) {
            return (this.ans.get(x) || 0) + (this.ans.get(y) || 0);
        }
        else if (isNaN(Number(x.charAt(0))) && !isNaN(Number(y.charAt(0)))) {
            return (this.ans.get(x) || 0) + parseInt(y);
        }
        else if (!isNaN(Number(x.charAt(0))) && isNaN(Number(y.charAt(0)))) {
            return (this.ans.get(y) || 0) + parseInt(x);
        }
        else {
            let a = parseInt(x), b = parseInt(y);
            return a + b;
        }
    }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * var obj = new Spreadsheet(rows)
 * obj.setCell(cell,value)
 * obj.resetCell(cell)
 * var param_3 = obj.getValue(formula)
 */