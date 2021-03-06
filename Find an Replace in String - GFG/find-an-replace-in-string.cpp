// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        int n=S.size();
        string ans;
        int ptr=0;
        int i=0;
        while(i<n)
        {
            if(i==index[ptr])
            {
                string temp=S.substr(i,sources[ptr].size());
                if(temp==sources[ptr])
                {
                    ans+=targets[ptr];
                    i+=sources[ptr].size()-1;
                }
                else
                {
                    ans+=S[i];
                }
                ptr++;
            }
            else
            {
                ans+=S[i];
            }
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends