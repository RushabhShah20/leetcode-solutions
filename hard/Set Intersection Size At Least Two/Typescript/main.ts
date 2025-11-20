// Problem: Set Intersection Size At Least Two
// Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
function intersectionSizeTwo(intervals: number[][]): number {
    intervals.sort((a, b) => a[1] === b[1] ? b[0] - a[0] : a[1] - b[1]);
    let ans: number = 0;
    let a: number = -1, b: number = -1;
    for (const interval of intervals) {
        let l: number = interval[0], r: number = interval[1];
        if (l > b) {
            a = r - 1;
            b = r;
            ans += 2;
        } else if (l > a) {
            a = b;
            b = r;
            ans += 1;
        }
    }
    return ans;
};