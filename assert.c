//assert()
//此函示用以檢查程式中設定為真的條件，若不成立，則終止程式執行。

#include <stdio.h>
#include <assert.h>

int main(){
    int a, b, judge;
    a = 3;
    b = 5;
    if(a/b == 0){
        judge = 1;
    }else{
        judge = 0;
    }

    assert(judge != 1);

}
