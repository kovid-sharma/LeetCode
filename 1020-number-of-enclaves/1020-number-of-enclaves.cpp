class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col,int i,int j)
    {
        if(i<0 or j<0 or i>=row or j>=col or grid[i][j]==0)
            return;
        grid[i][j]=0;
        dfs(grid,row,col,i+1,j);
        dfs(grid,row,col,i,j-1);
        dfs(grid,row,col,i-1,j);
        dfs(grid,row,col,i,j+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        //we say it is flood has come
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {   
            dfs(grid,row,col,i,0);//line vertical
            dfs(grid,row,col,i,col-1);//vertical 2
            
        }
        for(int i=0;i<col;i++)
        {
            dfs(grid,row,col,0,i);//line horizontal
            dfs(grid,row,col,row-1,i);//horizon 2 bottom
        }
        int cnt=0;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(grid[i][j]==1)
                    cnt++;
        return cnt;
    }
};