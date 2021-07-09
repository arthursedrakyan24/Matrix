#include "lib.hpp"

//In this function we calculate how much size we need for putting our binary number to array.
int size_ofY(int z){
	int j=0;
	while(z>=2){
		j+=1;
		z/=2;
		}
	return j;
}


