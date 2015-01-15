#include "reduce.h"
int reduce(int *collection,int length,int *(func)(int ,int ,int ,int *),int initValue){
	int i=0;
	int prevValue = initValue;
	for(i=0;i<length;i++){
		prevValue=func(prevValue,collection[i],i,collection);
	}
	return prevValue;
}