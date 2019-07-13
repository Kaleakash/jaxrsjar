#include<stdio.h>
#include<string.h>
void main() {
	int leng;
	char name[10]={"Raj Deep"};
	char fname[10]={"Raj"};
	char lname[10]={"Raj"};
	char name1[10]={"Ajay"};
	char name2[10];
	leng = strlen(name);
	printf("Lenght of the fname is %d\n",leng);
	if(strcmp(fname,lname)==0) {
		printf("Equal");
	}else {
		printf("Not Equal");
	}
	strcpy(name2,name1);
	printf("After name copied\n");
	printf("name is = %s\n",name1);
	printf("name is = %s\n",name2);
}