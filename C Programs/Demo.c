#include<stdio.h>
void main() {
	int a,b,sum,sub,choice;
	printf("1:Add \t 2:Sub\n");
	scanf("%d",&choice);
	printf("Enter the value of a \n");
	scanf("%d",&a);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	switch(choice) {
	case 1: sum = a+b;
		printf("Sum of two number is = %d\n",sum);
		break;
	case 2: sub = a-b;
		printf("Sub of two number is = %d\n",sub);
		break;
	default : printf("Wrong choice");
		break;
	}
	printf("Finish");
}