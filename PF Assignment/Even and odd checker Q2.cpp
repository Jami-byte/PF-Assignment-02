#include<stdio.h>

int main(){
	int number;
	printf("Enter a number\n");
	scanf("%d", &number);
	
	if(number%2 == 0){
		printf("number is even\n");
	}
	else{
		printf("number is odd\n");
	}
	return 0;
}
