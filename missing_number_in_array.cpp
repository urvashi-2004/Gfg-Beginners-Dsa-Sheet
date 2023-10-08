class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
   
       int res=array[0];
    for(int i=1;i<n-1;i++)
    {
        res=res^array[i];
    }
    for(int i=1;i<=n;i++)
    {
        res=res^i;
    }
    return res;
    }
};