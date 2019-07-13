#include<stdio.h>
int main() {
	int ch,choice;
	do {
		printf("1:GK");
		printf("Plz enter your choice");
		scanf("%d",&choice);
		switch(choice){
		case 1:printf("Welcome to GK Block");
			break;
		default:printf("Wrong choice");
			break;
		}
		
	printf("Do you want to continue (yes=1/no=0)");
	scanf("%d",&ch);
	}while(ch==1 );
	printf("Finish");
	return 0;
}	



