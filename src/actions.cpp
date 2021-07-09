#include "lib.hpp"

int size_ofY(int z);
int* Binary(int x, int* y);

void Actions(){
	//Declaring my Matrix, variables, which are responsible for matrix up place summary and down place summary. 
	int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int BinDown=0;
	int BinUp=0;
	//In for loop we calculating up and down summaries.
	for(int i=0; i<4; i++){
		for(int j=0; j<i; j++){
		BinDown+=matrix[i][j];
		}
		for(int j=3; j>i; j--){
		BinUp+=matrix[i][j];
		}
	}
	//BinMatrixDown/Up is an array, owing to which Binary function is working. They are Binary function argument.
	int BinMatrixDown[size_ofY(BinDown)];
	int BinMatrixUp[size_ofY(BinUp)];
	//Repeat variable is calculating how many numbers are in up place and down place in our matrix.
	int repeatUp=0, repeatDown=0;
	//For loop is changing the matrix's up and down number to 0 or 1 . 
	for(int i=0, e=0, f=0; i<4; i++){
		for(int j=0; j<i; j++){
			//If is important, because if our 0's or 1's are less than the numbers, which must be changed, program will not be correct.
			if(size_ofY(BinDown)>repeatDown){
				matrix[i][j]=Binary(BinDown, BinMatrixDown)[e];
				e++;
				repeatDown++;
			} else { matrix[i][j]=0; }
		}
		for(int j=3; j>i; j--){
			if(size_ofY(BinUp)>repeatUp){
				matrix[i][j]=Binary(BinUp, BinMatrixUp)[f];
				f++;
				repeatUp++;
			} else { matrix[i][j]=0; }
		}
	}
	//Finally we are outputing the matrix.
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

