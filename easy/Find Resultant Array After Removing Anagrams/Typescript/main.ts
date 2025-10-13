// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
function compare(str1: string, str2: string): boolean {
    let char1: string = str1.split('').sort().join('');
    let char2: string = str2.split('').sort().join('');
    return char1 === char2;
}
function removeAnagrams(words: string[]): string[] {
    let a: number = 0;
    let v: string[] = new Array();
    for (let i = 1; i < words.length; i++) {
        if (compare(words[a], words[i])) {
            words[i] = "1";
        }
        else {
            a = i;
        }
    }
    for (let i = 0; i < words.length; i++) {
        if (words[i] !== "1") {
            v.push(words[i]);
        }
    }
    return v;
};