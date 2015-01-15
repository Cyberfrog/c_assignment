#include "expr_assert.h"
#include "concate.h"
void test_for_two_array_it_gives_concated_array(){
	int marks1[]={1,2,3};
	int s1=3;
	int s2 =2;
	int marks2[]={4,5};
	int expectedReuslt[]={1,2,3,4,5};
	int *result = (int *)malloc(sizeof(int)*(s1+s2));
	int r = concat(&marks1,s1,&marks2,s2,result);
	assertEqual(expectedReuslt[0],result[0]);
	assertEqual(expectedReuslt[1],result[1]);
	assertEqual(expectedReuslt[2],result[2]);
	assertEqual(expectedReuslt[3],result[3]);
	assertEqual(expectedReuslt[4],result[4]);
	assert(r==1);
}
void test_for_negative_size_it_returns_0(){
	int marks1[]={1,2,3};
	int s1=-3;
	int s2 =-2;
	int marks2[]={4,5};
	int *result = (int *)malloc(sizeof(int)*(s1+s2));
	int r = concat(&marks1,s1,&marks2,s2,result);
	assert(r==0);
}