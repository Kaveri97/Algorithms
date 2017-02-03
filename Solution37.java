import java.util.Scanner;

class Solution37{

    public static int getHeight(NodeTree root){
      //Write your code here
       NodeTree temp = root;
       if(temp==null){
           return -1;
       }
       int hr = 1+getHeight(temp.right);
       int hl = 1+getHeight(temp.left);
       return Math.max(hr,hl); 
    }

    public static NodeTree insert(NodeTree root,int data){
        if(root==null){
            return new NodeTree(data);
        }
        else{
            NodeTree cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
	 public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        NodeTree root=null;
        while(T-->0){
            int data=sc.nextInt();
            root=insert(root,data);
        }
        int height=getHeight(root);
        System.out.println(height);
    }
}