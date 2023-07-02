#include<stdio.h>
int num(int n);
int main(){
    int n;
    printf("Enter natural numbers:\n");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers:%d\n",n,num(n));
    return 0;
}
int num(int n)
{
    if(n!=0)
    return n+num(n-1);
    else
    return n;
}
