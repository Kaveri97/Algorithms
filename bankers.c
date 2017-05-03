#include <stdio.h>
int main() {
	
	int p,r,q;
	int seq[p];
	char ch1,ch2;
	int l = 0,i,j,k,pr,flag;
t:	printf("Enter number of processes\n");
	scanf("%d", &p);
	flag = 0;
	printf("Enter number of resources\n");
	scanf("%d", &r);
	int alloc[p][r], need[p][r], max[p][r];
	int avail[r],req[r],work[r];
	int finish[p];
	printf("Enter maximum number of resources required by each process\n");
	for ( i = 0; i < p; ++i)
	{
		for ( j = 0; j < r; ++j)
		{
			scanf("%d", &max[i][j]);
		}
	}
	printf("Enter number of resources allocated to each process\n");
	for ( i = 0; i < p; ++i)
	{
		for ( j = 0; j < r; ++j)
		{
			scanf("%d", &alloc[i][j]);
		}
	}
	printf("Enter number of resources available of each type\n");
	for ( j = 0; j < r; ++j)
	{
		scanf("%d", &avail[j]);
		work[j] = avail[j];
	}
	
	printf("Is any process requesting for resources(1/0)\n");
		scanf("%d", &q);
		if(q == 1){
		printf("Enter process number requesting resources\n");
		scanf("%d", &pr);
		printf("Enter request array\n");
		for ( i = 0; i < r; ++i)
		{
			scanf("%d", &req[i]);
		}
		int c = 0;
		for ( j = 0; j < r; ++j)
		{
			if(req[j] <= work[j])
			c++;
		}
		if(c == r){
		for ( k = 0; k < r; ++k)
		{
			work[k] -= req[k];
			alloc[pr][k] += req[k]; 
		}
		flag = 1;
		}
		else{
		printf("Request is not granted for P%d as resources are not available. P%d is waited.\n", pr, pr);
		goto e;
	}
	}
	
	for ( j = 0; j < p; ++j)
	{
		finish[j] = 0;
	}
	for ( i = 0; i < p; ++i)
	{
		for ( j = 0; j < r; ++j)
		{
			need[i][j] = max[i][j] - alloc[i][j];
		}
	}
	printf("Work\n");
	for ( i = 0; i < p; ++i)
	{	int c = 0;
		for ( j = 0; j < r; ++j)
		{
			if(need[i][j] <= work[j])
				c++;
		}
		if(c==r && !finish[i]){
			finish[i] = 1;
			for ( k = 0; k < r; ++k)
			{
				work[k] += alloc[i][k];
				printf("%d ", work[k]); 
			}
			printf("\n");
			seq[l++] = i;
			i = -1;
		}
	}
	
	if(finish[0] != finish[p-1]){
		printf("\nNo safe sequence obtained. DEADLOCK!\n");
		if(flag == 1){
			printf("Request is not granted for P%d. P%d is waited.\n", pr, pr);
			goto e;
		}
	}
	else{
	
		if(flag == 1){
			printf("\nRequest is granted for P%d.\n", pr);
		}
		printf("\nSafe sequence obtained as :\n");
		for ( j = 0; j < p; ++j)
		{
			printf("%d ", seq[j]);
		}
		printf("\n\nNeed\n");
		for(i=0;i<p;i++){
			for(j=0;j<r;j++){
				printf("%d ",need[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}


	e : printf("Do you want to continue(y/n)\n");
		ch1 = getchar();
		ch2 = getchar();
		if ('y' == ch2 || ch2 == 'Y')
			goto t;
		else
			return 0;
}
