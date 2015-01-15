#include "reverse.h"
#include <stdlib.h>
int reverse(int *array, int length, int *result_array){
	int i;
	if(length<0){
		return 0;
	}
	for(i=0;i<length;i++){
		result_array[i]=array[(length-i)-1];
	}
	return 1;
}
int in_place_reverse(int *array, int length){
	int i;
	int *temp =(int *)malloc(sizeof(int)*length);

	if(length<0){
		return 0;
	}
	for(i=0;i<length;i++){
		temp[i]=array[i];
	}
	for(i=0;i<length;i++){
		array[i]=temp[(length-i)-1];
	}
	return 1;
}
