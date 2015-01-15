#include "expr_assert.h"
#include <string.h>
#include "strcmp.h"
void test_it_gives_diffrence_in_ascii_values_of_two_string_for_1st_string_is_short(){
	char *str1 = "hello";
	char *str2 = "helloo";
	int actual= my_strcmp(str1,str2);
	int expected = strcmp(str1,str2);
	assertEqual(actual,expected);
}
void test_it_gives_diffrence_in_ascii_values_of_two_string_for_2nd_string_is_short(){
	char *str1 = "hellooo";
	char *str2 = "helloo";
	int actual= my_strcmp(str1,str2);
	int expected = strcmp(str1,str2);
	assertEqual(actual,expected);
}

void test_it_gives_diffrence_in_ascii_values_of_two_string_if_one_of_the_string_is_empty(){
	char *str1 = "hellooo";
	char *str2 = "";
	int actual= my_strcmp(str1,str2);
	int expected = strcmp(str1,str2);
	assertEqual(actual,expected);
}
void test_it_gives_diffrence_in_ascii_values_of_two_string_if_one_of_the_string_is_array(){
	char *str1 = "hellooo";
	char str2[] = "hii";
	int actual= my_strcmp(str1,str2);
	int expected= strcmp(str1,str2);
	assertEqual(actual,expected);
}
void test_test_it_gives_diffrence_in_ascii_values_of_two_string_for_first_unmatch_charecter(){
	char *str1 = "hello";
	char str2[] = "hillo";
	int actual= my_strcmp(str1,str2);
	int expected= strcmp(str1,str2);
	assertEqual(actual,expected);
}