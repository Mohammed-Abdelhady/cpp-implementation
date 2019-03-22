
#include <iostream>
#include <assert.h>
#include <algorithm>

using namespace std;

int get2ndMax(int arr[] , int size){
	int fMax = 0 , sMax = 1;
	assert(size >= 2);

	if(sMax > fMax){
		swap(sMax , fMax);

	}
	for(int i = 2 ; i < size ;i++){
		if(arr[i] > arr[fMax]){ // element bigger than youth
			sMax = fMax;
			fMax = i;
		}else if(arr[i] > arr[sMax]){
			sMax = i;
		}else
			;

	}
	return arr[sMax];
}

int main() {
	int arr[] = {5 , 7 , 6 , 8 ,656 , 4 , -1};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "max value of array = " << get2ndMax(arr , size) <<"\n";
	return 0;
}
