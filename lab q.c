#include<stdio.h>
int main(){
	int x,y,z,p;
	scanf("%d%d%d%d",&x,&y,&z,&p);
	if(x>y){
		if(x>z){
			if(x>p){
				printf("x");
			}
			else{
				printf("p");
			}
		}
		else{
			if(z>p){
				printf("z");
			}
			else{
				printf("p");
			}
		}
	}
	else if(y>z){
		if(y>p){
			printf("y");
		}
		else{
			printf("p");
		}
	}
	else if(z>p){
		printf("z");
	}
	else{
		printf("p");
	}
}
