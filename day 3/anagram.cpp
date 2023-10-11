
class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        // Your code here
        int n=a.length();
        int m=b.length();
                 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
                
        if(n!=m)
            return false;
                
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            return false;
        }
        return true;
    }
};