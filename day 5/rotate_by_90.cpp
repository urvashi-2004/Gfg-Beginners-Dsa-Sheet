class Solution
{   
    public:
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    } 
};