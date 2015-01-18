#include "indexOf.h"
#include <string.h>
int indexOf(char *string, char *subString){
	int strLength = strlen(string);
	int i;
	for(i=0;i<strLength;i++){
		if(string[i]==subString[0]&&isMatch(string,subString,i)){
			return i;
		}
	}
	return -1;
}
int isMatch(char *string,char *subString,int index){
	int i;
	for(i=0;i<strlen(subString);i++){
		if(string[i+index]!=subString[i]){
			return 0;
		}
	}
	return 1;
}