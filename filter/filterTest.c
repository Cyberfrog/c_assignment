#include "expr_assert.h"
#include "filter.h"
#include "string.h"
void test_less_filter_removes_the_elementfrom_array_less_than_threshold(){
	int marks[]={10,20,30,50,70};
	
	int expectedReuslt[]={30,50,70};
	int *result;// = (int *)malloc(sizeof(int)*5);
	int sizeOfResult;
	sizeOfResult = less_filter(marks,5,25,&result);

	assertEqual(expectedReuslt[0],result[0]);
	assertEqual(expectedReuslt[1],result[1]);
	assertEqual(expectedReuslt[2],result[2]);
	assert(sizeOfResult==3);
} 
void test_less_filter_reurns_0_when_size_is_negative(){
	int marks[]={10,20,30,50,70};
	int *result;// = (int *)malloc(sizeof(int)*5);
	int sizeOfResult = less_filter(marks,-5,25,&result);
	assert(sizeOfResult==0);
} 
	int isPass(int  mark,int index ,int *array){
		if(mark>25){
			return 1;
		}
		return 0;
	}
void test_int_filter_gives_filterd_array_and_return_sizeOf_filterd_array(){
	int marks[]={50,20,30,40,50};
	int *passMarks;
	int expected[] = {50,30,40,50};

	int sizeOfPassMarks;

	 sizeOfPassMarks = int_filter(marks, 5, &passMarks,isPass);
	assertEqual(sizeOfPassMarks,4);
	assertEqual(expected[0], passMarks[0]);
	assertEqual(expected[1], passMarks[1]);
	assertEqual(expected[2], passMarks[2]);
}
int isSouth (String city,int index,String *array){
	if(city[0]<'d'){
		return 1;
	}
	return 0;
}
void test_String_filter_gives_filterd_array_and_return_sizeOf_filterd_array(){
	String citys[]={"nagpur","bangalor","chennai","pune","delhi"};
	String *southCitys;
    String expected[] = {"bangalor","chennai"};
	int sizeOfSouthCitys;
	sizeOfSouthCitys = string_filter(citys,5, &southCitys,isSouth);
	assertEqual(sizeOfSouthCitys,2);
	assertEqual(strcmp(expected[0], southCitys[0]),0);
	assertEqual(strcmp(expected[1], southCitys[1]),0);
}

