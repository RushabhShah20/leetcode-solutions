// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
function numberOfPairs(points: number[][]): number {
    let ans: number = 0;
    for (let i = 0; i < points.length; i++) {
        for (let j = 0; j < points.length; j++) {
            if (i != j) {
                let x1: number = points[i][0], y1: number = points[i][1], x2: number = points[j][0], y2: number = points[j][1];
                if ((x1 <= x2) && (y1 >= y2)) {
                    let z: boolean = true;
                    for (let k = 0; k < points.length; k++) {
                        let x: number = points[k][0], y: number = points[k][1];
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