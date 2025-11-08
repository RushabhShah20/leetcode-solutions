// Problem: Minimum Amount of Time to Fill Cups
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
function smallest(a: number, b: number, c: number): number {
    if (a < b) {
        if (a < c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b < c) {
            return b;
        }
        else {
            return c;
        }
    }
};
function fillCups(amount: number[]): number {
    let ans: number = 0;
    let a: number = amount[0], b: number = amount[1], c: number = amount[2];
    while (a > 0 || b > 0 || c > 0) {
        if (smallest(a, b, c) === a) {
            b--;
            c--;
        }
        else if (smallest(a, b, c) === b) {
            a--;
            c--;
        }
        else {
            a--;
            b--;
        }
        ans++;
    }
    return ans;
};