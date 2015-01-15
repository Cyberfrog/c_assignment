#include "expr_assert.h"
#include "reduce.h"
void test_reduce_reduces_the_array_to_single_vlaue(){
	int marks[]={40,60,80,30,20};
	int findmax(int previous,int current,int index,int *all){
		return previous>current?previous:current;
	}
	int max = reduce(marks,5,findmax, 0);
	assertEqual(max,80);
}
