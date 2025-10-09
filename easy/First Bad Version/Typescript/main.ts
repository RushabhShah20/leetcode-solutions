// Problem: First Bad Version
// Link to the problem: https://leetcode.com/problems/first-bad-version/
/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean {
 *     ...
 * };
 */

var solution = function (isBadVersion: any) {

    return function (n: number): number {
        let l: number = 1, r: number = n;
        while (l < r) {
            let m: number = l + Math.floor((r - l) / 2);
            if (isBadVersion(m)) {
                r = m;
            }
            else {
                l = m + 1;
            }
        }
        return l;
    };
};