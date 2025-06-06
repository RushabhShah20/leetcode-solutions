// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
function intToRoman(num: number): string {
    const romanNumerals: { [key: number]: string } = {
        1: 'I',
        4: 'IV',
        5: 'V',
        9: 'IX',
        10: 'X',
        40: 'XL',
        50: 'L',
        90: 'XC',
        100: 'C',
        400: 'CD',
        500: 'D',
        900: 'CM',
        1000: 'M'
    };

    let result = '';
    const keys = Object.keys(romanNumerals).map(Number).reverse();

    for (const key of keys) {
        while (num >= key) {
            result += romanNumerals[key];
            num -= key;
        }
    }

    return result;
};