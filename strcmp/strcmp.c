#include <string.h>
#include <stdio.h>
#include "strcmp.h"

int my_strcmp(char *str1,char *str2){
	int i=0;
	int maxLenght = strlen(str1);
	if(maxLenght<strlen(str2)){
		maxLenght = strlen(str2);
	}
	for(i=0;i<maxLenght;i++){
		int diff = str1[i]-str2[i];
		if(diff!=0){
			return diff;
		}
	}
	return 0;
}