class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(i==j){
                    sum+=mat[i][j];
                    continue;
                }
                if(i+j+1==n)
                    sum+=mat[i][j];   
            }
        return sum;
    }
};