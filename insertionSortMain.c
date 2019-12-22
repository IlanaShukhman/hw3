#include<stdio.h>
#include <string.h>
#include"insertionSort.h"
#define n 50

int arr[n]={0};
int main(){

	printf("Insert 5 numbers:");

	//insertion sort
	for (int i = 0; i < n; i++) {
		scanf("%d", arr+i);
	}
	insertion_sort(arr, n);
	for (int i = 0; i < n-1; i++) {
		printf("%d,", *(arr+i));
	}
	printf("%d", *(arr+n-1));


	return 0;
}
