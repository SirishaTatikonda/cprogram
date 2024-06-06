
#include<stdio.h>
int min(int x, int y)
{
return y ^ ((x ^ y) & -(x < y));
}
int max(int x, int y)
{
return x ^ ((x ^ y) & -(x < y)); 
}
int main()
{
int x = 15;
int y = 6;
printf("Minimum of %d and %d is ", x, y);
printf("%d", min(x, y));
printf("\nMaximum of %d and %d is ", x, y);
printf("%d", max(x, y));
getchar();
}

