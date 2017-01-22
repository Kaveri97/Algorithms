import java.util.Scanner;
public class Graph {

	
	public void adjMatrix(){
			int n1, n2,i,j,k,l;
			
			Scanner scan = new Scanner(System.in);
			System.out.println("Enter number of vertices ");
			
			n1 = scan.nextInt();
			int[][]  arr = new int[n1][n1];
			char[]  colour = new char[n1];
			int[]  d = new int[n1];
			String[]  pre = new String[n1];
			int[][]  b = new int[n1][n1];
			int[][]  c = new int[n1][n1];
			char[] str1 = new char[n1];
			char src;
			System.out.println("Enter number of pair of edges ");
			n2 = scan.nextInt();
			String[] str2 = new String[n2];
			
			System.out.println("Enter " + n1 + " vertices");
			for (i=0;i<n1; i++){
				str1[i] = scan.next().charAt(0);
			}
			
			System.out.println("Enter " + n2 + " pairs of edges (in the form ab) ");
			for (i=0;i<n2; i++){
				str2[i] = scan.next();
			}
		
			for(i=0; i<n1; i++){
				for(j=0; j<n2; j++){
					if(str2[j].charAt(0) == str1[i]){
						for(k=0;k<n1;k++){
							if(str2[j].charAt(1) == str1[k]){
								arr[i][k] = 1;
							}
						}
					}
					if(str2[j].charAt(1) == str1[i]){
						for(k=0;k<n1;k++){
							if(str2[j].charAt(0) == str1[k]){
								arr[i][k] = 1;
							}
						}
					}
				}
			}
			for(i=0;i<n1;i++){
				for(j=0;j<n1;j++){
					System.out.print(arr[i][j]);
				}
				System.out.println();
			}
			
			for( i=0; i<n1; i++){
				int count = 0;
				for( j=0;j<n1; j++){
					if(arr[i][j] == 1){
						count++;
					}
				}
				System.out.println("Degree of "+ str1[i] + " is " + count);
			}
			
			System.out.println("Paths of length 2 ");
			for(i=0;i<n1;i++){
				for(j=0;j<n1;j++){
					if(arr[i][j] == 1){
						for(l=0;l<n1;l++){
							if(arr[j][l] == 1 && l!=i)
							System.out.println(str1[i] + "-" + str1[j] + "-" + str1[l]);	
						}
					
						
					}
				}
			}
			System.out.println("Square of the Matrix");
			for( i=0; i<n1; i++){
				int sum=0;
				for(j=0;j<n1;j++){
					sum = sum + arr[i][j]*arr[j][i];
					b[i][j] = sum;
				}
				
			}
			for(i=0;i<n1;i++){
				for(j=0;j<n1;j++){
					System.out.print(b[i][j]);
				}
				System.out.println();
			}
			System.out.println("Paths of length 3");
			for( i=0; i<n1; i++){
				int sum=0;
				for(j=0;j<n1;j++){
					sum = sum + b[i][j]*arr[j][i];
					c[i][j] = sum;
				}
				
			}
			for(i=0;i<n1;i++){
				for(j=0;j<n1;j++){
					System.out.print(c[i][j]);
				}
				System.out.println();
			}
			System.out.println("Enter source vertex");
			src = scan.next().charAt(0);
			System.out.println("BFS");
			for( i=0; i<n1; i++){
				
					colour[i] = 'B';
					d[i] = 9999;
					pre[i] = "NIL";
			if (str1[i] == src){
				d[i] = 0;
				colour[i] = 'G';
			}
	 }	
}
}