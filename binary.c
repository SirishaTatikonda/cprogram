#include<stdio.h>
void main()
{
	int n;
	int binarynum[32];
	int i=0;
	int j;
	scanf("%d",&n);
	while(n>0)
	{
		binarynum[i] = n%2;
		n = n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%d\n",binarynum[j]);
}
