#include<stdio.h>
void main() {
	char name[10]={"Ravi Kumar"};
	char fname[15];
	char stdNames[10][7];
	int i;
	printf("The name is %s\n",name);
	//printf("Enter the name\n");
	//scanf("%s",&fname);
	//printf("First name is = %s\n",fname);
	printf("Enter ther name one by one\n");
	for(i=0;i<5;i++) {
		scanf("%s",&stdNames[i]);
	}
	printf("\nThe names are \n");
	for(i=0;i<5;i++) {
		printf("%s\n",stdNames[i]);
	}
}









