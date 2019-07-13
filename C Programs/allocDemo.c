#include<stdio.h>
#include<malloc.h>
void main() {
	int n,i,*ptr;
	printf("Alloc Example ---Dynamic Memory Allocation\n");
	printf("How many number do you want to store\n");
	scanf("%d",&n);
	// pointerVariable = (dataType*)malloc(size*sizeof(dataType));
	//ptr = (int*)malloc(n*sizeof(int));
	ptr = (int*)calloc(n,sizeof(int));
	/*printf("Enter the value one by one\n");
	for(i=0;i<n;i++) {
		scanf("%d",(ptr+i));
	}*/
	printf("Number are \n");
	for(i=0;i<n;i++) {
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
}