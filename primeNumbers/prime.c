#include "prime.h"
int primeNumber (int start,int end,int **primes){
	int i=0;
	int *temp = (int *)malloc(sizeof(int)*(end-start));
	int tempIndex=-1;
	for(i=start;i<end;i++){
		if(isPrime(i)){
			temp[++tempIndex] = i;
		}
	}
	*primes = (int *)malloc(sizeof(int)*(tempIndex+1));
	for(i=0;i<=tempIndex;i++){
		(*primes)[i]=temp[i];
	}
	free(temp);
	return tempIndex+1;
}
int isPrime(int number){
	int check=0;
	int i;
	if(number<=1||(number!=2 && number%2==0)){
		return 0;
	}
	for(i=2;i<=number/10;i++){
		if(number%i==0){
			return 0;
		}
		check++;
	}
	
	printf("number %d checkes %d\n", check,number);
	return 1;
}