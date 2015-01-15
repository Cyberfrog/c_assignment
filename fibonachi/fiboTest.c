#include "expr_assert.h"
#include "fibo.h"
void test_it_gives_fibonachi_series_tern_in_given_array(){
	int n = 5;
	int expectedTerm[5] = {1,1,2,3,5};
	int *terms = (int *) malloc(sizeof(int) * n);
	fibo(n,terms);

	assertEqual(expectedTerm[0],terms[0]);
	assertEqual(expectedTerm[1],terms[1]);
	assertEqual(expectedTerm[2],terms[2]);
	assertEqual(expectedTerm[3],terms[3]);
	assertEqual(expectedTerm[4],terms[4]);
	assert(terms[5]!=8);


}
void test_for_negative_number_its_returns_0(){
	int n = -5;
	int *terms = (int *) malloc(sizeof(int) * n);
	int result= fibo(n,terms);
	assertEqual(result,0);
}

void test_for_successful_exicution_it_returns_1(){
	int n = 5;
	int *terms = (int *) malloc(sizeof(int) * n);
	int result= fibo(n,terms);

	assertEqual(result,1);
}

void test_for_0_term_fibo_retuns_0_and_dont_touch_the_array(){
	int n = 0;
	int *terms = (int *) malloc(sizeof(int) * n);
	int result= fibo(n,terms);

	assertEqual(result,0);
}
void test_it_gives_1st_term_for_1(){
	int n = 1;
	int expectedTerm[1] = {1};
	int *terms = (int *) malloc(sizeof(int) * n);
	fibo(n,terms);
	assertEqual(expectedTerm[0],terms[0]);
	assert(terms[1]!=1);
}

void test_it_gives_2_term_for_2(){
	int n = 2;
	int expectedTerm[2] = {1,1};
	int *terms = (int *) malloc(sizeof(int) * n);
	fibo(n,terms);
	assertEqual(expectedTerm[1],terms[1]);
	assertEqual(expectedTerm[0],terms[0]);

	//assert(terms[2]!=2);
}