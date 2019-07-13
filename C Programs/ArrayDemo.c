#include<stdio.h>
void  main() {
	int abc[10];
	int abc1[5]={1,2,3,4,5};
	int num[5];
	int i;
	char name1[5]={'a','b','c','d','e'};
	char fname[10]={"Raj Deep"};
	printf("%d\n",abc[0]);
	printf("%d\n",abc1[0]);
	printf("%c\n",name1[0]);
	printf("%s\n",fname);
	printf("Enter the 5 number one by one ");
	for(i=0;i<5;i++) {
		scanf("%d",&num[i]);
	}
	printf("The numbers are \n");
	for(i=0;i<5;i++) {
		printf("VAlue are %d\n",num[i]);
	}
}