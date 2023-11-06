class Solution
{
    public:

    vector<long long> printFibb(int n) 
    {
        vector<long long>ans;
       long long a=1,b=1,c;

        if(n==1){
            return {1};
        }
        
        ans.push_back(a);
        ans.push_back(b);

        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            ans.push_back(c);
        }
        return ans;
    }
};