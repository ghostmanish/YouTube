#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number ");
    scanf("%d",&num);
    i = 1;
    do{
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }while(i<=0);
    return 0;
}
