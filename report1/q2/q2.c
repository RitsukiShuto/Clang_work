#include<stdio.h>

int main(){
		int n1, n2;

		printf("1:");	scanf("%d", &n1);
		printf("2:");	scanf("%d", &n2);

		if(n1 == n2){
				printf("%d = %d\n", n1, n2);
		}else if(n1 > n2){
				printf("%d > %d\n", n1, n2);
		}else{
				printf("%d < %d\n", n1, n2);
		}

		return 0;
}
