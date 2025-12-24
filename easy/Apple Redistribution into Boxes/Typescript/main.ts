// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
function minimumBoxes(apple: number[], capacity: number[]): number {
    let ans: number = 0;
    capacity.sort((a, b) => b - a);
    let total: number = 0;
    for (const a of apple) {
        total += a;
    }
    for (const c of capacity) {
        if (total >= c) {
            total -= c;
            ans++;
        }
        else {
            if (total !== 0) {
                ans++;
            }
            break;
        }
    }
    return ans;
};