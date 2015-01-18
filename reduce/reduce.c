#include "reduce.h"
int reduce(int *collection,int length,int (*func)(int ,int ,int ,int *),int initValue){
	int i=0;
	int prevValue = initValue;
	for(i=0;i<length;i++){
		prevValue=func(prevValue,collection[i],i,collection);
	}
	return prevValue;
}
String string_reduce(String *collection,int length,String (*func)(String,String,int,String *),String initValue){
	int i;
	String prevValue=initValue;
	for(i=0;i<length;i++){
		prevValue=func(prevValue,collection[i],i,collection);
	}
	return prevValue;
} 
char char_reduce(char *array,int length,char (*func)(char ,char ,int ,char *),char initValue ){
	int i;
	char prevValue = initValue;
	for(i=0;i<length;i++){
		prevValue=func(prevValue,array[i],i,array);
	}
	return prevValue;
}
float float_reduce(float *array,int length,float (*func)(float ,float ,int ,float *),float initValue ){
	int i;
	float prevValue = initValue;
	for(i=0;i<length;i++){
		prevValue=func(prevValue,array[i],i,array);
	}
	return prevValue;
}