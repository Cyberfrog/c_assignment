int fibo(int numberofterm,int *array){
	int i;
	if(numberofterm <=0){
		return 0;
	}
	else{ 
		// fibonachi(numberofterm-1,array);
		for(i=0;i<numberofterm;i++){
			if(i<=1){
				array[i]=1;
			}else{
			array[i]=array[i-1]+array[i-2];}
		}
		return 1;
	}
}
int fibonachi(int n,int *array){
	if(n<=1){

		array[n]=1;
		return 1;
	}
	else{
		array[n]= fibonachi(n-1, array)+fibonachi(n-2,array);
		return array[n];
	}
}
