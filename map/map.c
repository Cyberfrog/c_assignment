#include "map.h"
int * map(int *array,int lenght,int (*func)(int ,int ,int *)){
	int i;
	int *mapped =(int *) malloc(sizeof(int)*lenght);
	for(i=0;i<lenght;i++){
		mapped[i]=func(array[i],i,array);
	}
	return mapped;
}
