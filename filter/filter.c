#include "filter.h"
#include <stdlib.h>
int less_filter(int *array, int length, int threshold, int **result_array){

	int i;
	int tempIndex=-1;
	int *temp =(int *)malloc(sizeof(int)*length);
	if(length<0){
		return 0;
	}
	for(i=0;i<length;i++){
		if(array[i]>threshold){
			temp[++tempIndex] = array[i];	
		}
	}
	
	*result_array =(int *)malloc(sizeof(int)*tempIndex+1);

	for(i=0;i<=tempIndex;i++){		
		(*result_array)[i]=temp[i];
	}
	free(temp);
	return tempIndex+1;
}
int int_filter(int *collection,int length,int **filterd,int (*predicate)(int ,int,int *)){
	int i;
	int filterdSize =0;
	int filterdIndex =-1;
	for (i=0;i<length;i++){
		if(predicate(collection[i],i,collection)){
			filterdSize++;
		}
	}
	*filterd =(int *)malloc(sizeof(int)*filterdSize);

	for (i = 0; i < length; i++)
	{
		if(predicate(collection[i],i,collection)){

			 (*filterd)[++filterdIndex] = collection[i];
		}
	}
	return filterdSize;
}