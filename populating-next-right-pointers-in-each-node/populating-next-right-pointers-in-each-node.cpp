/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int to_popu=n-1;
            Node*now=NULL;
            for(int i=to_popu;i>=0;i--){
                
                Node*qka=q.front();
                q.pop();
                qka->next=now;
                now=qka;
                if(qka->right and qka->left){
                    q.push(qka->right);
                    q.push(qka->left);
                }
            }
        }
        return root;
    }
};