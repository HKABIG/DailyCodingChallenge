class Solution
{
public:
    int node=0;
    int mxgcd=INT_MIN;
    void dfs(Node* root){
        if(root==NULL) return;
        if(root->left && root->right){
            int gcd = __gcd(root->left->data,root->right->data);
            if(gcd>=mxgcd){
                node = mxgcd==gcd?max(root->data,node):root->data;
                mxgcd = gcd;
            }
        }
        dfs(root->left);
        dfs(root->right);
    }
    int maxGCD( Node* root)
    {
        //code here
        dfs(root);
        return node;
    }
};