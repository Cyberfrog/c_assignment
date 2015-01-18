#include "map.h"
#include <stdlib.h>
int * map(int *array,int lenght,int (*func)(int ,int ,int *)){
	int i;
	int *mapped =(int *) malloc(sizeof(int)*lenght);
	for(i=0;i<lenght;i++){
		mapped[i]=func(array[i],i,array);
	}
	return mapped;
}
char * char_map(char *array,int length,char (*func)(char,int ,char*)){
	int i;
	char *mapped =(char *) malloc(sizeof(char)*length);
	for(i=0;i<length;i++){
		mapped[i]=func(array[i],i,array);
	}
	return mapped;

}
String * string_map(String *array,int length,String (*func)(String ,int ,String *)){
	int i;
	String *mapped =(String *) malloc(sizeof(String)*length);
	for(i=0;i<length;i++){
		mapped[i]=func(array[i],i,array);
	}
	return mapped;
}
float * float_map(float *array,int length,float (*func)(float ,int ,float *)){
	int i;
	float *mapped =(float *) malloc(sizeof(float)*length);
	for(i=0;i<length;i++){
		mapped[i]=func(array[i],i,array);
	}
	return mapped;
}