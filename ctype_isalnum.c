//isalnum()
//用以判斷字元是否為字母或數字


#include <stdio.h>
#include <ctype.h>

int main(){
    int a = '4';
    int b = 'g';
    int c = '\n';
    char d = 'Y';
    
    if(isalnum(a)){
        printf("a 是字母或數字");
    }else{
        printf("a 不是字母或數字");
    }

    printf("\n");

    if(isalnum(b)){
        printf("b 是字母或數字");
    }else{
        printf("b 不是字母或數字");
    }

    printf("\n");

    if(isalnum(c)){
        printf("c 是字母或數字");
    }else{
        printf("c 不是字母或數字");
    }

    printf("\n");

    if(isalnum(d)){
        printf("d 是字母或數字");
    }else{
        printf("d 不是字母或數字");
    }


}