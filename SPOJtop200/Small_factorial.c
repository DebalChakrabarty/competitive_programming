#include<stdio.h>
#define MAX 500
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  
 	int i;
    for (i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry  = prod/10;   
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void factorial(int n)
{
    int res[MAX];
    int x,i;
    res[0] = 1;
    int res_size = 1;
    for (x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    for (i=res_size-1; i>=0; i--)
        printf("%d",res[i]);
        printf("\n");
}
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		factorial(N);
	}
	return 0;
}
		
