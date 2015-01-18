#include "expr_assert.h"
#include "indexOf.h"
void test_indexOf_find_index_of_substring_form_given_string(){
	char *str1 = "hello";
	char *str2 = "lo";
	int index= indexOf(str1,str2);
	int expected = 3;
	assertEqual(index,expected);
}

void test_indexOf_returns_minus_1_if_substring_is_not_present_in_String(){
	char *str1 = "hello";
	char *str2 = "hoo";
	int index= indexOf(str1,str2);
	int expected = -1;
	assertEqual(index,expected);
}
void test_subStrCmp_returns_1_if_string_from_index_matches_to_substring(){
	char *str1 = "hello";
	char *str2 = "lo";
	int result= isMatch(str1,str2,3);
	assertEqual(result,1);
}
void test_subStrCmp_returns_0_if_string_from_index_not_matches_to_substring(){
	char *str1 = "hello";
	char *str2 = "lo";
	int result= isMatch(str1,str2,2);
	assertEqual(result,0);
}
void test_indexOf_find_first_index_of_substring_form_given_string(){
	char *str1 = "AeyNoNo";
	char *str2 = "No";
	int result= indexOf(str1,str2);
	assertEqual(result,3);
}