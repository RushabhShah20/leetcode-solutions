// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
public class Solution {
    public int KthFactor(int n, int k) {
        List<int> a = new List<int>();
        for(int i=1;i<=n;i++){
            if(n%i==0){
                a.Add(i);
            }
        }
        if(a.Count()<k){
            return -1;
        }else{
            return a[k-1];
        }
    }
}