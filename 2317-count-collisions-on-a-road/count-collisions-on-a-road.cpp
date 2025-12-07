class Solution {
public:
    int countCollisions(string directions) {
       int carR = 0;
       int n = directions.size();
       int i = 0;
       int cnt = 0;
       while(directions[i]=='L')i++; //let me go have fun
       while(i<n)
       {
            if(directions[i]=='R')
            {
                carR++;  //this this i how many total R are seen
            }
            if(directions[i]=='S'){
                //they get hit to s
                cnt += carR;
                carR = 0;
            }
            else if(directions[i]=='L'){
                cnt++;// first one is 2 , rest this L becomes S
                cnt+=carR;
                carR = 0;
            }
            i++;
       } 
        return cnt;
    }
};