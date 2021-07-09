#include "lib.hpp"

//in this function we are changing our number to binary digital.
int* Binary(int x, int* y){
	int i=0;
	while(x>=2){
		y[i]=x%2;
		x/=2;
		i+=1;
	}
	return y;	
}


