#include "expr_assert.h"
#include "slice.h"
void test_slice_part_of_array_from_start_to_end_index(){
	int marks[] ={0,7,8,9,-1,-3};
	int *sliceed;
	int start =1;
	int end = 5;
	int expected[] = {7,8,9,-1};
	int sizeOfSliced = slice(&marks,6,start,end,&sliceed);
	assertEqual(sizeOfSliced,4 );
	assertEqual(expected[0],sliceed[0]);
	assertEqual(expected[1],sliceed[1]);
	assertEqual(expected[2],sliceed[2]);
}
void test_slice_returns_zero_start_index_is_invalid(){
	int marks[] ={0,7,8,9,-1,-3};
	int *sliceed;
	int start =6;
	int end = 5;
	int sizeOfSliced = slice(&marks,6,start,end,&sliceed);
	assertEqual(sizeOfSliced,0);
}