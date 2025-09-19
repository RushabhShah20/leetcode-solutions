// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
/**
 * @param {number} rows
 */
var Spreadsheet = function (rows) {
    this.ans = new Map();
};
/** 
 * @param {string} cell 
 * @param {number} value
 * @return {void}
 */
Spreadsheet.prototype.setCell = function (cell, value) {
    this.ans.set(cell, value);
};

/** 
 * @param {string} cell
 * @return {void}
 */
Spreadsheet.prototype.resetCell = function (cell) {
    this.ans.delete(cell);
};

/** 
 * @param {string} formula
 * @return {number}
 */
Spreadsheet.prototype.getValue = function (formula) {
    let plusPos = formula.indexOf('+');
    let x = formula.substring(1, plusPos), y = formula.substring(plusPos + 1);
    if (isNaN(x.charAt(0)) && isNaN(y.charAt(0))) {
        return (this.ans.get(x) || 0) + (this.ans.get(y) || 0);
    }
    else if (isNaN(x.charAt(0)) && !isNaN(y.charAt(0))) {
        return (this.ans.get(x) || 0) + parseInt(y);
    }
    else if (!isNaN(x.charAt(0)) && isNaN(y.charAt(0))) {
        return (this.ans.get(y) || 0) + parseInt(x);
    }
    else {
        let a = parseInt(x), b = parseInt(y);
        return a + b;
    }
};

/** 
 * Your Spreadsheet object will be instantiated and called as such:
 * var obj = new Spreadsheet(rows)
 * obj.setCell(cell,value)
 * obj.resetCell(cell)
 * var param_3 = obj.getValue(formula)
 */