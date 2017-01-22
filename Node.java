import java.util.Scanner;

public class Node
{
public int data;
public Node next;
/* Constructor */
public Node()
{
next = null;
data = 0;
}
/* Constructor */
public Node(int d,Node n)
{
data = d;
next = n;
}
}