class Solution {
  public:
   int height(Node* root){
       if(root==NULL) return 0;
       return max(1+height(root->left),1+height(root->right));
   }
   void help(Node* root,vector<vector<int>>& v){
       if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            v[level].push_back(node->data);
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
   }
    vector<int> maximumValue(Node* node) {
        int h = height(node);
        vector<vector<int>> v(h);
        vector<int> b;
        help(node,v);
        for(int i=0;i<v.size();i++){
            b.push_back(*max_element(v[i].begin(),v[i].end()));
        }
        return b;
    }
};