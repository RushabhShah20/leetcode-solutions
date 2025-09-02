// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
/**
 * @param {number[][]} points
 * @return {number}
 */
var numberOfPairs = function (points) {
    let ans = 0;
    for (let i = 0; i < points.length; i++) {
        for (let j = 0; j < points.length; j++) {
            if (i != j) {
                let x1 = points[i][0], y1 = points[i][1], x2 = points[j][0], y2 = points[j][1];
                if ((x1 <= x2) && (y1 >= y2)) {
                    let z = true;
                    for (let k = 0; k < points.length; k++) {
                        let x = points[k][0], y = points[k][1];
                        if (i != k && j != k) {
                            if (((x1 <= x) && (x2 >= x)) && ((y1 >= y) && (y2 <= y))) {
                                z = false;
                                break;
                            }
                        }
                    }
                    if (z === true) {
                        ans++;
                    }
                }
            }
        }
    }
    return ans;
};