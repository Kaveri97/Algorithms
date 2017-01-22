import java.util.Scanner;

public class SinglyLinkedList
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		/* Creating object of class linkedList */
		linkedList list = new linkedList();
		char ch;
	do
	{
	System.out.println("\nSingly Linked List Operations");
	System.out.println("1. insert at beginning");
	System.out.println("2. insert at end");
	System.out.println("3. insert at position");
	System.out.println("4. delete at position");
	System.out.println("5. display");
	System.out.println("6. sort");
	int choice = scan.nextInt();
		switch (choice)
			{
			case 1 : { list.insertAtBeg(18); 
					break; }
			case 2 : { list.insertAtEnd(15); 
					break; }
			case 3 : { list.insertAtPos(4,3); 
					break; }
			case 4 : { list.deleteAtPos(4); 
					break; }
			case 5 : { list.display(); 
					break; }
			case 6 : { list.sort(); 
					break; }
			default : break;
			}
       
	System.out.println("\nDo you want to continue (Type y or n) ");
	ch = scan.next().charAt(0);
	} while (ch == 'Y'|| ch== 'y');
	}
}