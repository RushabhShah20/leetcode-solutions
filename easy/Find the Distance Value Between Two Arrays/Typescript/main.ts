// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
function findTheDistanceValue(arr1: number[], arr2: number[], d: number): number {
    let ans = 0;
    for (let i = 0; i < arr1.length; i++) {
        let x = true;
        for (let j = 0; j < arr2.length; j++) {
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