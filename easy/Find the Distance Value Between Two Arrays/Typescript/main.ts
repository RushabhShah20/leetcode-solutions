// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
function findTheDistanceValue(arr1: number[], arr2: number[], d: number): number {
    const n: number = arr1.length, m: number = arr2.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        let x: boolean = true;
        for (let j = 0; j < m; j++) {
            if (arr1[i] == arr2[j] || Math.abs(arr1[i] - arr2[j]) <= d) {
                x = false;
                break;
            }
        }
        if (x == true) {
            ans++;
        }
    }
    return ans;
};