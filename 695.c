#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		printf("-*-*-*-*-*-*");
		for(j=1;j<=i;j++){
			printf("%d",i);
 		}
 		printf("-*-*-*-*-*-*-");
 		printf("\n");
	}

	
}
