// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
/**
 * @param {number} n
 * @return {number}
 */
var toBinary = function (n) {
    let ans = new Array();
    while (n > 0) {
        let rem = n % 2;
        ans.push(rem);
        n = (n / 2) >> 0;
    }
    return ans;
};
var complement = function (res) {
    for (let i = 0; i < res.length; i++) {
        if (res[i] === 1) {
            res[i] = 0;
        } else if (res[i] === 0) {
            res[i] = 1;
        }
    }
    return res;
};
var bitwiseComplement = function (n) {
    if (n === 0) {
        return 1;
    } else {
        let ans = 0;
        let binary = toBinary(n);
        let com = complement(binary);
        for (let i = 0; i < com.length; i++) {
            ans += Math.pow(2, i) * com[i];
        }
        return ans;
    }
};
