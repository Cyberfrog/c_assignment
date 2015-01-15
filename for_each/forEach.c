#include "forEach.h"
int forEach(int *array,int length,void (*func)(int,int,int *)){
	int i;
	if(length<=0){
		return 0;
	}
	for(i=0;i<length;i++){
		func(array[i],i,array);
	}
	return 1;
}
int forEach_char(char *array,int length,void(*func)(char,int,char *)){
	int i;
	if(length<=0){
		return 0;
	}
	for(i=0;i<length;i++){
		func(array[i],i,array);
	}
	return 1;
}
int forEach_string(char *strings[],int length,void(*func)(char *,int ,char *[])){
	int i;
	if(length<=0){
		return 0;
	}
	for(i=0;i<length;i++){
		func(strings[i],i,strings);
	}
	return 1;
}
