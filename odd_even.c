#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nThe number is even");
    }
    else if(n%2==1)
    {
        printf("\nThe number is odd");
    }
    return 0;
}
