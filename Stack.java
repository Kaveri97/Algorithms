import java.io.*;
class stack
{
char stack1[]=new char[20];
int top=-1;
//char output[]=new char[5];
public void push (char x){

		if(top==20 - 1)
			System.out.println("Stack overflow");
		else
			{
			top++;
			stack1[top] = x;
			//System.out.println("Element pushed");
			//displayElements();
			}
	}

public boolean isEmpty(){

	if(top==-1)
		
		return true;
	else
		return false;
	}
	
	public boolean isFull(){

	if(top==19)
			
			return true;
	else
      			return false;
	}
/*public void displayElements() {

		for (int i = top; i >= 0; i++) {
			System.out.println(output[i]);
		}
	}*/
public void pop(){
	
	if(top==-1)
		System.out.println("Stack underflow");
	else
		{
		stack1[top] = 0;
		top--;
		//System.out.println("Element popped");
		//displayElements();
		}
	}
int preference(char ch)
{
switch(ch)
{
case '-':return 1;
case '*':return 2;
case '+':return 1;
case '/':return 2;
case '^':return 3;
}
return 0;
}
boolean operator(char ch)
{
// To check whether an operator
if(ch=='/'||ch=='*'||ch=='+'||ch=='-')
return true;
else
return false;
}
boolean isAlpha(char ch)
{
// To check whether an alphabet
//Include characters 0 t0 9
if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z'||ch>='0'&&ch<='9')
return true;
else
return false;
}
void postfix()
{
char output[]=new char[8];
char str[] = { 'A', '+', 'B', '-' ,'C'   };
char ch;
int p=0,i;
for(i=0;i<5;i++)
{
ch=str[i];
if(ch=='(')
{ 
	push(ch);
}
else if(isAlpha(ch))
{
	
  	 output[p++] = ch;
}
else if(operator(ch))
{
 	if (isEmpty())
		push(ch);
	else if (preference(stack1[top])>=preference(ch))
  	{ 		output[p++] = stack1[top];
	
		pop();
			push(ch);
		}
	else push(ch);
		
	
}
else if(ch==')')
{
	while(!(isEmpty()) && stack1[top]!='(')
  	{ output[p++] = stack1[top];
			pop();
		}
	pop();
}
}
while(!(isEmpty()))
  	{ output[p++] = stack1[top];
			pop();
		}
System.out.println("Output");
for(int j=0;j<5;j++)
{
System.out.println(output[j]);
}
System.out.println("Stack");
for(int j=0;j<5;j++)
{
System.out.println(stack1[j]);
}

}
public static void main(String[] args) {
	//char A[] = { 'A', '+', 'B', '–' ,'C'   };
	stack s = new stack();
	//System.out.println("output is ");
	s.postfix();
	
	
	}
}