#include<stdio.h>

int main(){

    for(int i = 1;i <= 100;i++){
        if(i % 3 == 0){
            int aho = 1;
            for(int j = 1;j <= i;j++){
                aho *= j;
            }
            printf("%d\n", aho);
        }else{
            printf("%d\n", i);
        }
    }

    return 0;
}