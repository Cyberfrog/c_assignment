#include "expr_assert.h"
#include <string.h>
#include <stdlib.h>
#include "map.h"
int add1(int num,int index,int *array){
		return num+1;	
}
void test_it_gives_diffrence_in_ascii_values_of_two_string_for_1st_string_is_short(){
	int nums[]={1,2,3,4,5};
	int expectd []={2,3,4,5,6};
	
	int *maped = map(nums,5,add1);
	assertEqual(maped[0],expectd [0]);
	assertEqual(maped[1],expectd [1]);
	assertEqual(maped[2],expectd [2]);
}
char toCaps(char charecter,int index,char *array){
	return charecter<97?charecter:(charecter-32);
}


void test_char_map_gives_diffrence_in_ascii_values_of_two_string_for_1st_string_is_short(){
	char small[]={'a','B','c','d','e'};
	char expected []={'A','B','C','D','E'};
	char *maped = char_map(small,5,toCaps);

	assertEqual(maped[0],expected[0]);
	assertEqual(maped[1],expected[1]);
	assertEqual(maped[2],expected[2]);
}

String toUpperCase(String city,int index,String * citys){
	int sl = strlen(city);
	String upperCaseString = char_map(city,sl+1,toCaps); 
	return upperCaseString;
}

void test_string_map_gives_diffrence_in_ascii_values_of_two_string_for_1st_string_is_short(){
	String citys[]={"nagpur","bangalor","chennai","pune","delhi"};
	String expected []={"NAGPUR","BANGALOR","CHENNAI","PUNE","DELHI"};
	String *maped = string_map(citys,5,toUpperCase);

	assertEqual(strcmp(maped[0],expected[0]),0);
	assertEqual(strcmp(maped[1],expected[1]),0);
	assertEqual(strcmp(maped[2],expected[2]),0);
}