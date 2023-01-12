#include<stdio.h>
int main()
{
    int num, mul=1;
    do{
        printf("Enter a number");
        scanf("%d",&num);
        mul = mul * num;
    }while(num!=1);
    printf("Total value = %d",mul);
    return 0;
}
