write a input two number a and b which one is maximum ?
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the first number:\n");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    if(a>b){
        printf("a is maximun:\n");
    }else{
        printf("b is maximun:\n");
    }
    return 0;
}
