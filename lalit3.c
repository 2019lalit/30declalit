/*write a c program input a character :
			m or M :male 
			female */
#include<stdio.h>
int main(){
    char a;
    printf("enter the character:\n");
    scanf("%c",&a);
    if(a=='m' || a=='M'){
        printf("male:\n");
    }else{
        printf("female:\n");
    }
    return 0;
}
