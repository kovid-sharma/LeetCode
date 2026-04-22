class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
       int q = queries.size();
       vector<string>ans;
       for(int i=0;i<q;i++)
       {
            string curr = queries[i];
            for(auto dic: dictionary)
            {
                int misMatch = 0;
                for(int j=0;j<curr.size();j++)
                {
                    if(curr[j]!=dic[j])
                        misMatch++;
                    if(misMatch>2)  break;  
                }
                if(misMatch<=2){
                    ans.push_back(curr);
                    break;
                }

            }
       } 
       return ans;
    }
};