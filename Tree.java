
public class Tree {
	public Node root;
	public int flag;
	public Node temp1;
	
	public Tree() {
		root = null;
	}
	public Node insertNode(Node root, int X){
		if( root == null){
			Node n = new Node(X);
			root = n;
		}
		else if ( root.data > X){
			root.left = insertNode(root.left, X);
		}
		else 
			root.right = insertNode(root.right, X);
       return root;
	}
	
	public void visit(Node a){
		System.out.println(a.data);
	}
	
	public void postOrder(Node v){
		if (v == null);
		else {
			postOrder(v.left);
			postOrder(v.right);
			visit(v);}
	}
	
	public void preOrder(Node v){
		if (v == null);
		else {
			visit(v);
			preOrder(v.left);
			preOrder(v.right);
			}
	}
	
	public void inOrder(Node v){
		if (v == null);
		else {
			inOrder(v.left);
			visit(v);
			inOrder(v.right);
			}
	}
	
	public void searchElement(Node root, int key){
		Node temp = root;
		flag = 0;
		if (key == temp.data){
			flag = 1;
			temp1 = temp;
		}
		else if ( key < temp.data && temp.right!= null && temp.left!= null)
			searchElement(temp.left,key);
		else if ( key > temp.data && temp.right!= null && temp.left!= null)
			searchElement(temp.right,key);
		else
			;
	}
	
	public void search(Node root, int key){
		searchElement(root, key);
		if ( flag == 1)
			System.out.println("Key found");
		else
			System.out.println("Key not found");
	}
	
	public void maxElement(Node root){
		Node temp = root;
		if (temp.right == null)
			System.out.println("Largest Element = " + temp.data);
		while( temp.right!=null){
			temp = temp.right;
		}
		System.out.println("Largest Element = " + temp.data);
	}
	
	public void minElement(Node root){
		Node temp = root;
		if (temp.left == null)
			System.out.println("Smallest Element = " + temp.data);
		while( temp.left!=null){
			temp = temp.left;
		}
		System.out.println("Smallest Element = " + temp.data);
	}
	
	public int successor(Node root){
		while(root.left!=null)
			root = root.left;
		return root.data;
	}
	
	public int predecessor(Node root){
		while(root.right!=null)
			root = root.right;
		return root.data;
	}
	
	
	
	public void delete(Node root,int key){
		searchElement(root,key);
			if( temp1.left == null && temp1.right == null){
				System.out.println("YES1");
				temp1=null;
			}
			else if( temp1.left == null){
				temp1.data = temp1.right.data;
				temp1.right = null;
				System.out.println("YES2");
			}
			else if( temp1.right == null){
				temp1.data = temp1.left.data;
				temp1.left = null;
				System.out.println("YES3");
			}
			else{
				if ( temp1.left!=null )
				temp1.data = predecessor(temp1.left);
				else
				temp1.data = successor(temp1.right);
				System.out.println("YES4");
			}
	}
}
