//User function template for JAVA

/*Complete the Given Function

Node is as follows:
class Node{
    int data;
    Node left,right;
    Node(int d){
    	data=d;
    	left=null;
    	right=null;
    }
}*/

class Solution{
    public int toSumTree(Node root){
         //add code here.
         if(root==null) return 0;
         int c = root.data;
         int a = toSumTree(root.left);
         int b = toSumTree(root.right);
         root.data = a+b;
         return a+b+c;
    }
}