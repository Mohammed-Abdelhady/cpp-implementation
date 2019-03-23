//============================================================================
// Name        : reverse_in_place.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

void  reverseInPlace(int arr[] , int size){
	for(int i = 0 ; i < size/2 ; i++){
		// swap first with last every cycle
		swap(arr[i] , arr[size-i-1]);
	}
}

void testReverseInPlace(){
	const int SIZE = 7;
	int arr[SIZE];
	int cpy[SIZE];

	int used_size = SIZE;

	for(int k = 0 ; k < 2 ; k++ ){
		// when k = 0 test 1000 time (odd) , k = 1 (even)
		for(int test = 0 ; test < 1000 ; test++){

			for(int i = 0 ; i < used_size ;i++){
				cpy[i] = arr[i] = rand() % 100;
			}
			reverseInPlace(arr, used_size);
			reverse(cpy , cpy + used_size);
			for(int i = 0 ; i < used_size ;i++){
				assert(cpy[i] == arr[i]);
			}
		}
		--used_size;
	}

	cout << "prefect";
}
int main() {
	testReverseInPlace();
	return 0;
}
