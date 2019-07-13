#include<stdio.h>
void displayMsg() {
	printf("displayMsg function\n");
}
void addNumber(int a, int b) {
	int add;
	add = a+b;
	printf("Sum of two number is %d\n",add);
}
int returnValue() {
	//coding 
	return 100;
}

float calSalary(int id, char name[],float salary);	//function prototype 

int main() {
	int x=10;
	int y = 20;
	int result;
	int id = 100;
	char name[10]={"Raj Deep"};
	float salary = 12000;
	float updatedSalary;
	printf("Main function\n");
	displayMsg();	
	addNumber(x,y);
	result = returnValue();
	printf("Result is = %d\n",result);
	updatedSalary   = calSalary(id,name,salary);
	printf("Updated salary is %f\n",updatedSalary);
}

float calSalary(int id, char name[],float salary) {
	//coding 
	salary = salary +3000;
	return salary;
}












