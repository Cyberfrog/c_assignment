#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,tearDown,fixtureSetup,fixtureTearDown,test_indexOf_find_index_of_substring_form_given_string,test_indexOf_returns_minus_1_if_substring_is_not_present_in_String,test_subStrCmp_returns_1_if_string_from_index_matches_to_substring,test_subStrCmp_returns_0_if_string_from_index_not_matches_to_substring,test_indexOf_find_first_index_of_substring_form_given_string;
Test test[] = {"test_indexOf_find_index_of_substring_form_given_string",test_indexOf_find_index_of_substring_form_given_string,"test_indexOf_returns_minus_1_if_substring_is_not_present_in_String",test_indexOf_returns_minus_1_if_substring_is_not_present_in_String,"test_subStrCmp_returns_1_if_string_from_index_matches_to_substring",test_subStrCmp_returns_1_if_string_from_index_matches_to_substring,"test_subStrCmp_returns_0_if_string_from_index_not_matches_to_substring",test_subStrCmp_returns_0_if_string_from_index_not_matches_to_substring,"test_indexOf_find_first_index_of_substring_form_given_string",test_indexOf_find_first_index_of_substring_form_given_string};
char testFileName[] = {"indexOfTest.c"};
void _setup(){/*CALL_SETUP*/}
void _tearDown(){/*CALL_TEARDOWN*/}
void fixtureSetup(){}
void fixtureTearDown(){}
//code to be updated ends

int testCount;
int passCount;
int currentTestFailed;

int assert_expr(int expr, const char* fileName, int lineNumber, const char* expression){
	if(expr) return 0;
	currentTestFailed = 1;
	printf("\t\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
	return 1;
}
int assert_equal(int val1, int val2, const char* fileName, int lineNumber,const char* expr1,const char* expr2){
	if(val1 == val2) return 0;
	currentTestFailed = 1;
	printf("\t\t %d == %d: failed in assertEqual(%s,%s) at %s:%d\n",val1,val2,expr1,expr2, fileName,lineNumber);
	return 1;
}

void runTest(char* name, TestFn test){
	testCount++,currentTestFailed=0;
	printf("\t%s\n",name);
	_setup();
		test();
	_tearDown();
	if(!currentTestFailed) passCount++;	
}

int main(){
	int i,total = sizeof(test)/sizeof(Test);
	fixtureSetup();
	testCount=0,passCount=0;
	printf("********* Starting tests of %s\n\n",testFileName);
	for (i = 0; i < total; ++i)
		runTest(test[i].name,test[i].fn);
	printf("\n********* Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
	fixtureTearDown();
	return 0;
}