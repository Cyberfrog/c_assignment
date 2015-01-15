#include "concate.h"
int concat(int *array1, int len_of_array1, int *array2, int len_of_array2, int *result_array){
	int i;
	if(len_of_array1<0||len_of_array2<0){
		return 0;
	}
	
	for(i=0;i<len_of_array1;i++){
		result_array[i]=array1[i];
	}	
	for(i=0;i<len_of_array2;i++){
		result_array[len_of_array1+i]=array2[i];
	}	
	return 1;
}