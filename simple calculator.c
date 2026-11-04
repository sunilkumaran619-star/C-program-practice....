#include<stdio.h>

int main(){
    char op;
    float a,b;
    printf("enter your numbers:");
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
        case'+':printf("=%.2f\n", a+b);
        break;
        case'-':printf("=%.2f\n",a-b);
        break;
        case'*':printf("=%.2f\n", a*b);
        break;
        case'/':printf("=%.2f\n",a/b);;\
        break;
        default:printf("error");
    }
    return 0;

}