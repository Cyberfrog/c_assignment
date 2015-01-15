#include "indexOf.h"
#include <string.h>
int indexOf(char *string, char *subString){
	int strLength = strlen(string);
	int subStrLength = strlen(subString);
	int subIndex=0; 
	int i;
	if(subStrLength>strLength){
		return -1;
	}
	for(i=0;i<strLength;i++){
		if(string[i]==subString[0]){
			if(subStrCmp(string,subString,i)){
				return i;
			}
		}
	}
	return -1;
}
int subStrCmp(char *string,char *subString,int index){
	int i;
	int strIndex =index;
	int diff=0;
	for(i=0;i<strlen(subString);i++){
		diff=string[strIndex++]-subString[i];
		if(diff!=0){
			return 0;
		}
	}
	return 1;
}