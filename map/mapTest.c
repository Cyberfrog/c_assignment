#include "expr_assert.h"
#include <string.h>
#include "map.h"
void test_it_gives_diffrence_in_ascii_values_of_two_string_for_1st_string_is_short(){
	int nums[]={1,2,3,4,5};
	int expectd []={2,3,4,5,6};
	int add1(int num,int index,int *array){
		return num+1;
	}
	int *maped = map(nums,5,add1);
	assertEqual(maped[0],expectd [0]);
	assertEqual(maped[1],expectd [1]);
	assertEqual(maped[2],expectd [2]);


}