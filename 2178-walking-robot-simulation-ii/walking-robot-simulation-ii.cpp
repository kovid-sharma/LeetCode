class Robot {
public:
    vector<pair<int, int>> dir;
    int dirn;
    vector<int> boundary;
    int curX;
    int curY;

    Robot(int width, int height) {
        dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        dirn = 1;
        boundary = {height - 1, width - 1, 0, 0};
        curX = 0;
        curY = 0;
    }

    void step(int num) {

        num%= (2*boundary[0] + 2*boundary[1]);
        if(num == 0)
            num = (2*boundary[0] + 2*boundary[1]);
        int bound = boundary[dirn];
        int cur = dirn % 2 == 0 ? curY : curX;
        int stepTr = abs(bound - cur);
        if (stepTr > num) {
            curX = curX + dir[dirn].first * num;
            curY = curY + dir[dirn].second * num;
        } 
        else if(stepTr == num)
        {
          
            if (dirn == 0) {
                curY = boundary[dirn];

            } else if (dirn == 1) {
                curX = boundary[dirn];
            } else if (dirn == 2) {
                curY = 0;
            } else {
                curX = 0;
            }
        }
        else {
            if (dirn == 0) {
                curY = boundary[dirn];

            } else if (dirn == 1) {
                curX = boundary[dirn];
            } else if (dirn == 2) {
                curY = 0;
            } else {
                curX = 0;
            }
            num -= stepTr;
            dirn = (dirn + 3) % 4;
            if (num != 0) {
                step(num);
            }
        }
    }

    vector<int> getPos() { return {curX, curY}; }

    string getDir() {
        return dirn == 1   ? "East"
               : dirn == 0 ? "North"
               : dirn == 2 ? "South"
                           : "West";
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */