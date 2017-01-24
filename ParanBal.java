public class ParanBal {

	private static int n_size = 10;
	char A[] = {  ')',  '(' };	
	static int top = -1;
	char B[] = new char[10];
	
	public void push (char x){

		if(top==n_size - 1)
			System.out.println("Stack overflow");
		else
			{
			top++;
			B[top] = x;
			System.out.println("Element pushed");
			displayElements();
			}
	}

	public void pop(){
	
	if(top==-1)
		System.out.println("Stack underflow");
		else
		{
		A[top] = 0;
		top--;
		System.out.println("Element popped");
		displayElements();
		}
	}
	
	public void displayElements() {

		for (int i = top; i >= 0; i++) {
			System.out.println(B[i]);
		}
	}

	public boolean check(){
	
	int i;
	for ( i=0;i<10;i++)
		{ if ( A[i] == '{' || A[i] == '(' || A[i] == '[')
				push(A[i]);
		
			else
				{if(top==-1)
			System.out.println("Stackunderflow");
		else
				{
					if (B[top] =='{')
					pop();
					
					else if (B[top] =='(')
					pop();
					
					else if (B[top] == '[')
					pop();
				}
			}}
 
		if(top == -1 && i==10)
			return true;
		else
			return false;
}

		public static void main(String[] args) {

	ParanBal s = new ParanBal();
	boolean n= s.check();
	System.out.println("Is expression balanced : "+n);
	
	}

}