
//write a c program input a character 'a' :apple 
//				otherwise :Sorry input is not matched

#include<stdio.h>
int main(){
    char a;
    printf("plese enter the character according to you:\n");
    scanf("%c",&a);
    if(a=='a'){
        printf("apple:\n");
        
    }else{
        printf("sorry input is not matched");
    }
    
    return 0;
}
