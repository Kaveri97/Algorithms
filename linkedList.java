import java.util.Scanner;

public class linkedList 
{
public Node head;
public int size;


/* Constructor */
public linkedList()
{ 

	head = null;
}
public boolean isEmpty()
{ if (head == null)
		return true;
	else 
		return false;
}
public void insertAtEnd(int val)
{
Node n = new Node(val, null);
if (isEmpty())
		head = n;
else {
		Node temp;
		temp  = head ;
			while ( temp.next!=null)
				{ temp = temp.next;
				}
		temp.next = n;} 
}

public void insertAtBeg(int val)
{
Node n = new Node(val, null);
if (isEmpty())
		head = n;
else{
		n.next = head;
		head = n;}
}
/* Function to insert an element at end */
/* Function to insert an element at position */
public void insertAtPos(int val , int pos)
{ int p = 1;
  Node temp;
  temp = head;
  while ( p<pos-1)
		{ temp = temp.next;
			p++;
		}
	Node newnode = new Node(val, null);
  newnode.next = temp.next;
	temp.next = newnode;
	
}

public void sort()
{ 
  Node temp;
  Node temp1;
	temp = head;
	temp1 = head;

	while( temp!=null)
	{ 	System.out.println("Hello2");
		temp1 = temp.next;	
		while( temp1!=null){
		System.out.println("Hello3");
			if ( temp.data > temp1.data)
			{ System.out.println("Hello4");
			  temp.next = temp.next.next;
			  temp1.next = temp;
			}
		temp1 = temp1.next;
		}
	temp = temp.next;
	}
}

/* Function to display elements */
public void display()
{
int count = 1;
System.out.print("Singly Linked List = ");
Node temp;
temp = head;
	while ( temp.next!=null)
				{
				 System.out.print(temp.data + " ");
				 temp = temp.next;
         count++;
				}
	System.out.print(temp.data + " ");
	System.out.print("Count of nodes = " + count);
  
//check empty condition and display a proper message
}

/* Function to delete an element at position */
public void deleteAtPos(int pos)
{
 	int p = 1;
  Node temp;
  temp = head;
  while ( p<pos-1)
		{ temp = temp.next;
			p++;
		}
	temp.next = temp.next.next;
}



}