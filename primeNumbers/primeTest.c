#include "expr_assert.h"
#include "prime.h"
void test_primeNumber_give_prime_numbers_between_the_range(){
	int *primes ;
	
	int expectedReuslt[]={2,3,5,7};
	int numberOfPrimes;
	numberOfPrimes = primeNumber(1,10,&primes);
	assertEqual(expectedReuslt[0],primes[0]);
	assertEqual(expectedReuslt[1],primes[1]);
	assertEqual(expectedReuslt[2],primes[2]);
	assertEqual(numberOfPrimes,4);
} 
void test_primeNumber_for_opposite_renge_returns_0(){
	int *primes ;
	int expectedReuslt[]={2,3,5,7};
	int numberOfPrimes;
	numberOfPrimes = primeNumber(10,1,&primes);
	assertEqual(numberOfPrimes,0);
} 

void test_primeNumber_for_2_5000_has_669_primes(){
	int *primes ;
	int numberOfPrimes;
	numberOfPrimes = primeNumber(2,5000,&primes);
	assertEqual(numberOfPrimes,669);
} 

// void test_primeNumber_for_2_15000_has_1754_primes(){
// 	int *primes ;
// 	int numberOfPrimes;
// 	numberOfPrimes = primeNumber(2,15000,&primes);
// 	assertEqual(numberOfPrimes,1754);
// } 
// void test_primeNumber_for_2_150000_has_13848_primes(){
// 	int *primes ;
// 	int numberOfPrimes;
// 	numberOfPrimes = primeNumber(2,150000,&primes);
// 	assertEqual(numberOfPrimes,13848);
// } 
// void test_primeNumber_for_2_1500000_has_114155_primes(){
// 	int *primes ;
// 	int numberOfPrimes;
// 	numberOfPrimes = primeNumber(2,1500000,&primes);
// 	assertEqual(numberOfPrimes,114155);
// } 
void test_primeNumber_top_range_is_not_included(){
	int *primes ;
	int expectedReuslt[]={2,3,5,7};
	int numberOfPrimes;
	numberOfPrimes = primeNumber(1,11,&primes);
	assertEqual(expectedReuslt[0],primes[0]);
	assertEqual(expectedReuslt[1],primes[1]);
	assertEqual(expectedReuslt[2],primes[2]);
	assertEqual(numberOfPrimes,4);
} 
void test_isPrime_return_1_if_number_is_prime(){
	int p = isPrime(3);

	assertEqual(p,1);
}
void test_isPrime_return_0_if_number_is_not_prime(){
	int p = isPrime(4);
	assertEqual(p,0);
} 
void test_isPrime_return_1_if_number_is_7(){
	int p = isPrime(7);

	assertEqual(p,1);
}
void test_isPrime_return_0_if_number_is_9(){
	int p = isPrime(9);
	assertEqual(p,0);
} 
void test_isPrime_return_0_if_number_is_1(){
	int p = isPrime(1);
	assertEqual(p,0);
} 
void test_isPrime_return_0_if_number_is_0(){
	int p = isPrime(0);
	assertEqual(p,0);
} 
void test_isPrime_return_1_if_number_is_97(){
	int p = isPrime(97);
	assertEqual(p,1);
}

// void test_print_1_200(){
// 	int *primes ;
// 	int numberOfPrimes;
// 	int i;
// 	numberOfPrimes = primeNumber(1,200,&primes);
// 	for(i=0;i<numberOfPrimes;i++){
// 		printf("%d\n",primes[i]);
// 	}
// } 