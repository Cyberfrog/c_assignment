#include "expr_assert.h"
#include "reduce.h"
#include <string.h>
int findmax(int previous,int current,int index,int *all){
	return previous>current?previous:current;
}
void test_reduce_reduces_the_array_to_single_vlaue(){
	int marks[]={40,60,80,30,20};

	int max = reduce(marks,5,findmax, 0);
	assertEqual(max,80);
}

int isVowel(char c){
	 return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int countVowel(String word){
	int wl = strlen(word);
	int count=0;
	int i;
	for(i =0;i<wl;i++){
		if(isVowel(word[i])){
			count++;
		}
	}
	return count;
}

String leastOvel (String pv,String cv,int index,String *array){
	return countVowel(pv)<=countVowel(cv)?pv:cv;
}



void test_string_reduce_the_string_array_to_single_vlaue(){
	String words[] ={"hooo","phoo","iii","aaaa","why"};
	String actual = string_reduce(words, 5, leastOvel, "a");
	assertEqual(strcmp(actual,"why"),0);
}
char max(char pv,char cv,int index,char *array){
	return pv>=cv?pv:cv;
}
void test_char_reduce_the_string_array_to_single_vlaue(){
	char word[] ={'h','p','a','b','y'};
	char actual = char_reduce(word, 5, max, 'A');
	assertEqual(actual,'y');
}
float maxFloat(float pv,float cv,int index,float *array){
	return pv>=cv?pv:cv;
}
void test_float_reduce_the_string_array_to_single_vlaue(){
	float temparatures[] ={1.2,3.2,4.5,2.5,4.2};
	float actual = float_reduce(temparatures, 5, maxFloat, 0);
	assert(actual==4.5);
}