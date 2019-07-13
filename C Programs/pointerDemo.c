#include<stdio.h>
void main() {
	
	//char name1;
	//char name2[5];

	char *name3;
	printf("Enter the pointer name\n");
	gets(name3);
	printf("%s",name3);

	
	/*printf("Enter the character\n");
	scanf("%c",&name1);
	printf("Enter the name \n");
	scanf("%s",&name2);
	
	printf("Single character is = %c\n",name1);
	printf("Name is = %s\n",name2);
	printf("Name is = %s\n",name3);
	*/
	/*
	
	int i=0;
	int abc[10]={10,20,30,40,50};
	int *ptr=abc;
		//ptr = abc;
	printf("Value of array variable using abc \n");
	for(i=0;i<5;i++) {
		printf("Value is = %d and Address is = %d\n",abc[i],&abc[i]);
	}
	printf("Value of array variable using pointer \n");
	for(i=0;i<5;i++) {
		printf("Value is = %d and Address is = %d\n",*(ptr+i), (ptr+i));
	}
	

	int a=10;
	float b=20.20;
	char c = 'p';
	
	void *ptr=&a;
	printf("Address of a = %d\n",&a);
	printf("Address of a using pointer = %d\n",ptr);

	ptr = &b;
	printf("Address of b = %d\n",&b);
	printf("Address of b using pointer = %d\n",ptr);
	

	int a =10;
	int *ptra = &a;	
	float b = 10.20;
	float *ptrb = &b;
	char c = '+';
	char *ptrc = &c;
	printf("The value of a = %d\n",a);
	printf("The value of a using pointer variable = %d\n",*ptra);
	printf("The value of b = %f\n",b);
	printf("The value of b using pointer variable= %f\n",*ptrb);
	printf("The valueo of c = %c\n",c);
	printf("The value of c using pointer variable = %c\n",*ptrc);

	printf("Adress of a using a variable = %d\n",&a);
	printf("Adress of a using pointer variable = %d\n",ptra);
	printf("Adress of b using a variable = %d\n",&b);
	printf("Adress of b using pointer variable = %d\n",ptrb);
	printf("Adress of c using a variable = %d\n",&c);
	printf("Adress of c using pointer variable = %d\n",ptrc);

	/*
	int a=10;
	int *ptr = &a;
	printf("Address of a using a variable = %d\n",&a);
	printf("Address of a using pointer varible = %d\n",ptr);
	ptr++;
	printf("Address of a using a variable = %d\n",&a);
	printf("Address of a using pointer varible = %d\n",ptr);


	printf("The value of a = %d\n",a);
	printf("The value of a using pointer variable is = %d\n",*ptr);
	a++;
	printf("After increment the value of a using a variable\n");
	printf("The value of a = %d\n",a);
	printf("The value of a using pointer variable is = %d\n",*ptr);
	(*ptr)++;
	printf("After increment the value of a using  pointer variable\n");
	printf("The value of a = %d\n",a);
	printf("The value of a using pointer variable is = %d\n",*ptr);
	*/
	/*
	int b=20;
	int *ptr;
	int *ptr1 = &a;
	int *ptr2;
	ptr2 = &b;
	int **ptr11 = &ptr1;
	int **ptr22 = &ptr2;
	printf("Address of a ptr1 variable = %d\n",&ptr1);
	printf("Address of a ptr2 variable = %d\n",&ptr2);
	printf("Address of a ptr1 using **ptr11 variable = %d\n",ptr11);
	printf("Address of a ptr1 using **ptr22 variable = %d\n",ptr22);
	
	printf("Value of a using *ptr1 pointer variable is = %d\n",*ptr1);
	printf("Value of a using *ptr2 pointer variable is = %d\n",*ptr2);
	printf("Value of a using **ptr11 pointer variable is = %d\n",**ptr11);
	printf("Value of a using **ptr pointer variable is = %d\n",**ptr22);
	*/
	/*printf("The value of a = %d\n",a);
	printf("The value of b = %d\n",b);
	
	printf("The value of a using pointer variable  = %d\n",*ptr1);
	printf("The value of b using pointer variable = %d\n",*ptr2);

	printf("The address of a using &a = %d\n",&a);
	printf("The address of b using &b = %d\n",&b);
		
	printf("The address of a using pointer variable  = %d\n",ptr1);
	printf("The address of b using pointer variable  = %d\n",ptr2);


	printf("The address of ptr1 using pointer variable  = %d\n",&ptr1);
	printf("The address of ptr2 using pointer variable  = %d\n",&ptr2);	
	*/	
}