#include "slice.h"
int slice(int *array,int length,int start_index,int end_index,int **result){
	int slicedLength = end_index - start_index; 
	int i,sliceIndex=-1;
	if(start_index >= end_index || start_index<0 ||end_index<0 || length<=0){
		return 0;
	}
	*result = (int * )malloc(sizeof(int)*slicedLength);
	for(i=start_index;i<end_index;i++){
		(*result)[++sliceIndex]=array[i];
	}
	return slicedLength;
}