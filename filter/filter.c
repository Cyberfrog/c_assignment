#include "filter.h"
#include <stdlib.h>
int less_filter(int *array, int length, int threshold, int **result_array){

	int  iteration;
	int tempIndex=-1;
	int *temp =(int *)malloc(sizeof(int)*length);
	if(length<0){
		return 0;
	}
	for( iteration=0; iteration<length; iteration++){
		if(array[ iteration]>threshold){
			temp[++tempIndex] = array[ iteration];	
		}
	}
	
	*result_array =(int *)malloc(sizeof(int)*tempIndex+1);

	for( iteration=0; iteration<=tempIndex; iteration++){		
		(*result_array)[ iteration]=temp[ iteration];
	}
	free(temp);
	return tempIndex+1;
}
int int_filter(int *collection,int length,int **filterd,int (*predicate)(int ,int,int *)){
	int  iteration;
	int filterdSize =0;
	int filterdIndex =-1;
	for ( iteration=0; iteration<length; iteration++){
		if(predicate(collection[ iteration], iteration,collection)){
			filterdSize++;
		}
	}
	*filterd =(int *)malloc(sizeof(int)*filterdSize);

	for ( iteration = 0;  iteration < length;  iteration++)
	{
		if(predicate(collection[ iteration], iteration,collection)){

			 (*filterd)[++filterdIndex] = collection[ iteration];
		}
	}
	return filterdSize;
}

int string_filter(String *collection,int length,String **filterd,int (*predicate)(String ,int ,String *array)){
	int  iteration;
	String *result=(String *)0;
	int filterdSize = 0;
	 for ( iteration=0; iteration<length; iteration++){
		if(predicate(collection[iteration], iteration,collection)){
			result = (String *)realloc(result,sizeof(String) * (filterdSize+1));
			result[filterdSize++] = collection[iteration];
		}
	}
	*filterd = result;
	return filterdSize;
}

int char_filter(char *collection,int length,char **filterd,int (*predicate)(char ,int ,char *array)){
	int  iteration;
	char *result=(char *)0;
	int filterdSize = 0;
	 for ( iteration=0; iteration<length; iteration++){
		if(predicate(collection[iteration], iteration,collection)){
			result = (char *)realloc(result,sizeof(char) * (filterdSize+1));
			result[filterdSize++] = collection[iteration];
		}
	}
	*filterd = result;
	return filterdSize;
}
int float_filter(float *collection,int length,float **filterd,int (*predicate)(float ,int ,float *array)){
	int  iteration;
	float *result=(float *)0;
	int filterdSize = 0;
	 for ( iteration=0; iteration<length; iteration++){
		if(predicate(collection[iteration], iteration,collection)){
			result = (float *)realloc(result,sizeof(float) * (filterdSize+1));
			result[filterdSize++] = collection[iteration];
		}
	}
	*filterd = result;
	return filterdSize;
}