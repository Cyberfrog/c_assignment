#include "expr_assert.h"
#include "reverse.h"
void test_reverse_the_given_array_and_give_it_in_result(){
	int marks[]={70,50,30};
	int expectedReuslt[]={30,50,70};
	int *result = (int *)malloc(sizeof(int)*5);
	reverse(&marks,3,result);
	assertEqual(expectedReuslt[0],result[0]);
	assertEqual(expectedReuslt[1],result[1]);
	assertEqual(expectedReuslt[2],result[2]);
} 
void test_for_zero_size_array_returns_1(){
	int size = 0;
	int marks[size];
	int *result = (int *)malloc(sizeof(int)*size);
	int r0=result[0];
	int exitCode = reverse(&marks,size,result);
	assertEqual(r0,result[0]);
	assertEqual(exitCode,1);

} 
void test_for_negative_size_it_returns_0(){
	int size = -5;
	int marks;
	int *result;
	int exitCode = reverse(&marks,size,result);
	assertEqual(exitCode,0);
} 
void test_in_place_reverse_the_given_array_and_give_it_in_result(){
	int marks[]={70,50,30};
	int expectedReuslt[]={30,50,70};
	in_place_reverse(&marks,3);
	assertEqual(expectedReuslt[0],marks[0]);
	assertEqual(expectedReuslt[1],marks[1]);
	assertEqual(expectedReuslt[2],marks[2]);
} 
void test_in_place_reverse_for_zero_size_array_returns_1(){
	int size = 0;
	int marks[size];
	int exitCode = in_place_reverse(&marks,size);
	assertEqual(exitCode,1);
} 
void test_in_place_reverse_for_negative_size_it_returns_0(){
	int size = -5;
	int marks;
	int exitCode = in_place_reverse(&marks,size);
	assertEqual(exitCode,0);
} 