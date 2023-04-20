
// CMSC 142 Lab Exercise 7: Subset Sum Problem
#include <stdio.h>
#include <stdlib.h>



// Swap function
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Insertion Sort
void isort(int a[], int n){
	int i, j;
	for(i=1;i<n;i++)
		for(j=i;j>0;j--)
			if(a[j] < a[j-1]) swap(&a[j], &a[j-1]);
			else break;
}

int main(){
	int *arrayNumInput, **table, k, arraySize;

	printf("What is k? : ");
	scanf("%d", &k);

	printf("What is the size of the array? : ");
	scanf("%d", &arraySize);

	arrayNumInput = (int *) malloc(sizeof(int)*arraySize);

	for(int i = 0; i<arraySize; i++){
		printf("Enter number in array: ");
		scanf("%d", &arrayNumInput[i]);
	}

	isort(arrayNumInput,arraySize);

	for(int i=0;i<arraySize;i++)
		printf("%d\n", arrayNumInput[i]);
}