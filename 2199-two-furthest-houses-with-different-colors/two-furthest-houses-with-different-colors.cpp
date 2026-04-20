class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i =0;
        int j = colors.size()-1;
        while(colors[i]==colors[j])
            j--;
        int ans = j-i;
        i =0;
        j = colors.size()-1;
           while(colors[i]==colors[j])
            i++; 
        return max(ans, j-i);   
    }
};