class Solution {
    public int singleNumber(int[] a) {
        
        int n=a.length;
        for(int i=1;i<n;i++){
            a[i]=a[i]^a[i-1];
        }
        return a[n-1];
    }
}