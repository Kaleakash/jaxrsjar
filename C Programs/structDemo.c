#include<stdio.h>
struct Abc {
	int a;
	float b;
	char c[10];
};
void main() {
	struct Abc p[10];
	printf("Enter the value of a \n");
	scanf("%d",&p.a);
	printf("Enter the value of b \n");
	scanf("%f",&p.b);
	printf("Enter the value of c \n");
	scanf("%s",&p.c);
	printf("a value is = %d\n",p.a);
	printf("b value is = %f\n",p.b);
	printf("c value is = %s\n",p.c);
}