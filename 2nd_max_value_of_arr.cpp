
#include <iostream>
#include <assert.h>
#include <algorithm>

using namespace std;

int get2ndMax(int arr[] , int size){
	assert(size >= 2);
	int fMax = arr[0], sMax = arr[1];

	if(sMax > fMax){ // e.g (2 , 5) -> (5,2)
		swap(sMax , fMax);
	}
	for(int i = 2 ; i < size ;i++){
		if(arr[i] > fMax){ // element bigger than youth
			sMax = fMax;
			fMax = arr[i];
		}else if(arr[i] > sMax){
			sMax = arr[i];
		}else
			;

	}
	return sMax;
}

void test2ndMax(){
	const int size = 10;
	int arr[size];
	for (int test = 0 ; test < 100 ; test++){
		//build random array
		for(int i = 0 ; i < size ; i++){
			arr[i] = rand() % 100; // arr[i] in range 0 to 100
		}
		cout <<endl;

		int myAnswer = get2ndMax(arr , size);

		sort(arr , arr + size);
		int correctAnswer = arr[size-2];

		cout << myAnswer << "  " << correctAnswer <<endl;
		assert(myAnswer == correctAnswer);
	}
	cout << "prefect";
}

int main() {
	test2ndMax();
	return 0;
}
