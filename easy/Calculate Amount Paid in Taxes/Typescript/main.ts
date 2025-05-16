// Problem: Calculate Amount Paid in Taxes
// Link to the problem: https://leetcode.com/problems/calculate-amount-paid-in-taxes/
function calculateTax(brackets: number[][], income: number): number {
    let ans: number = 0;
    if (income >= brackets[0][0]) {
        ans = ((brackets[0][0] * brackets[0][1]) / 100.0);
    }
    else {
        return ((income * brackets[0][1]) / 100.0);
    }
    for (let i = 1; i < brackets.length; i++) {
        if (income >= (brackets[i][0])) {
            ans += (((brackets[i][0] - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
        }
        else {
            ans += (((income - brackets[i - 1][0]) * brackets[i][1]) / 100.0);
            break;
        }
    }
    return ans;
};