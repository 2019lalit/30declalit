//write a c program input  character 'a'
//		two number input 
//		addition 

//	sorry input is not matched
//
#include<stdio.h>
int main(){
    char a;
    printf("enter the character:\n");
    scanf("%c",&a);
    if(a=='a'){
        int b,c,res;
        printf("first number:\n");
        scanf("%d",&b);
         printf("second number number:\n");
         scanf("%d",&c);
         res=b+c;
          printf("the sum of b and c is %d:",res);
    }else{
        printf(" sorry input is not matched:\n");
    }
    return 0;
}
