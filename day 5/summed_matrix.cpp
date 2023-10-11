class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        long long int x=n+1;
        long long int y=q-x;
        long long ans;
        
        if(y<0){
            ans=n+y;
        }
        else{
            ans=n-y;
        }
        if(ans>0){
            return ans;
        }
        else{
            return 0;
        }
    }
};