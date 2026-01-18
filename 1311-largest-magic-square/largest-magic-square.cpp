class Solution {
public:
    bool isMagic(int i, int j, vector<vector<int>>& grid, int side) {
        int sum = -1;
        for (int x = i; x < i + side; x++) {
            int curr = 0;
            for (int y = j; y < j + side; y++) {
                curr += grid[x][y];
            }
            if (sum == -1)
                sum = curr;
            else if (sum != curr)
                return false;
        }

        for (int x = j; x < j + side; x++) {
            int curr = 0;
            for (int y = i; y < i + side; y++) {
                curr += grid[y][x];
            }
            if (sum != curr)
                return false;
        }
        int curr = 0;
        for (int xx = 0; xx < side; xx++) {
            curr += grid[i + xx][j + xx];
        }
        if (curr != sum)
            return false;
        curr = 0;
        for (int xx = 0; xx < side; xx++) {
            curr += grid[i + xx][j + side - (xx +1)];
        }
        if (curr != sum)
            return false;
        return true;
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int gr = min(m, n);
        int ans = 1;
        for (int side = 2; side <= gr; side++) {
            for (int i = 0; i <= m - side; i++) {
                for (int j = 0; j <= n - side; j++) {
                    if (isMagic(i, j, grid, side))
                        ans = side;
                }
            }
        }
        return ans;
    }
};