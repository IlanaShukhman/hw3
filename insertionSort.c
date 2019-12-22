#include<stdio.h>
#include"insertionSort.h"

void shift_element(int* arr, int i){
  int temp1=*arr;
  int temp2;
  *arr= 0;
  arr++;

  for (int j = 0; j < i; j++) {
    temp2=*arr;
    *arr=temp1;
    arr++;
    temp1=temp2;
  }

}

int find_the_right_index(int*arr, int num, int length){
for (int i = 0; i < length; i++) {
  if(num<=*(arr+i))
  return i;
}
return -1;
}

void insertion_sort(int*arr, int len){
  for (int i = 1; i < len; i++) {

    if(*(arr+i)<*(arr+i-1)){
      int temp=*(arr+i);
      int index=find_the_right_index(arr, temp,len);
      shift_element(arr+index,i-index);
      *(arr+index)=temp;
    }
  }
}
