class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        for(auto it:queries)
        {
            vector<int>arr = it;
            int r1 = it[0], c1 = it[1], r2 = it[2], c2 = it[3];
            
            matrix[r1][c1] += 1;
            if(r2 + 1 < n && c2 + 1 < n) matrix[r2 + 1][c2 + 1] += 1;  //add ne
            if(r2 + 1< n) matrix[r2 + 1][c1] -= 1;
            if(c2 + 1 < n) matrix[r1][c2 + 1] -= 1;  
        }


        //after this just psum it
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j] += matrix[i-1][j];
            }
        }
        return matrix;
    }
};