#include "expr_assert.h"
#include "forEach.h"
#include <string.h>
int scores[] ={1,2,3,4,5};
char name[] = {'g','u','r','a','v'};
char *citys[]={"nagpur","bangalor","chennai","pune","delhi"};
int count =0;
void intCopy (int elemet,int index,int *array){
	assertEqual(count, index);

	assertEqual(elemet,scores[index]);
	assertEqual(elemet,array[index]);
	
	count++;
}
void charCopy (char elemet,int index,char *array){
	assertEqual(elemet,name[index]);
	assertEqual(elemet,array[index]);
	assertEqual(count, index);
	count++;
}

void test_forEach_calls_intCopy_for_each_element_with_element_index_and_array_as_arguments(){
	int exitcode = forEach(scores,5,intCopy);
	assertEqual(exitcode,1);
	assertEqual(count,5);
	count =0;


}
void test_forEach_return_0_when_length_is_0(){
	int exitcode = forEach(scores,0,intCopy);
	assertEqual(exitcode, 0);
}
void test_forEach_char_calls_charCopy_for_each_element_with_element_index_and_array_as_arguments(){
	int exitcode = forEach_char(name,5,charCopy);
	assertEqual(exitcode,1);
	assertEqual(count,5);
	count =0;
}

void test_forEach_char_return_0_when_length_is_0(){
	int exitcode = forEach_char(name,0,charCopy);
	assertEqual(exitcode, 0);
}


void copyCitys (char *elemet,int index,char **array){
	assertEqual(strcmp(elemet,citys[index]),0);
	assertEqual(strcmp(elemet,array[index]),0);
	assertEqual(count, index);
	count++;
}

void test_forEach_string_calls_stringCopy_for_each_element_with_element_index_and_array_as_arguments(){
	int exitcode = forEach_string(citys,5,copyCitys);
	assertEqual(exitcode, 1);
	assertEqual(count, 5);
	count =0;
}
void test_forEach_string_return_0_when_length_is_0(){
	int exitcode = forEach_string(citys,0,copyCitys);
	assertEqual(exitcode, 0);
	assertEqual(count, 0);
}