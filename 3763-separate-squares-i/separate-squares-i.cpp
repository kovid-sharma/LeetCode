class Solution {
public:
    double calc(double line, vector<vector<int>>& squares){
        double aAbove = 0, aBelow = 0;
        int n = squares.size();
        for(int i = 0; i < n; i++){
            int x = squares[i][0], y = squares[i][1];
            int l = squares[i][2];
            double total = (double) l * l;
            
            if(line <= y){
                aAbove += total;
            } 
            else if(line >= y + l){
                aBelow += total;
            } 
            else{
                 // The line intersects the square.
                double aboveHeight = (y + l) - line;
                double belowHeight = line - y;
                aAbove += l * aboveHeight;
                aBelow += l * belowHeight;
            }
        }
        return aAbove - aBelow;
    }
    double separateSquares(vector<vector<int>>& squares) {
        //wouldnt bimary search along the Y axis work
        double low = 0;
        double high = 2e9;
        for(int i=0;i<60;i++)
        {
            double mid = (low + high)/2.0;
            double diff = calc(mid, squares);

            if(diff>0) low = mid;
            else high = mid;
        }

        return high;
    }
};