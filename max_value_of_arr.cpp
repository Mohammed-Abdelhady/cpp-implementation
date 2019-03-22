
#include <iostream>
using namespace std;

int maxValueOfArr(int arr[] , int size){
	int idx = 0;
	for (int i = 1 ; i < size ; i++){
		// if need min not max (arr[idx] > arr[i])
		if(arr[idx] < arr[i]){
			idx = i;
		}
	}
	return arr[idx];
}

int main() {
	int arr[] = {5 , 7 , 6 , 8 ,656 , 0 , -1};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "max value of array = " << maxValueOfArr(arr , size) <<"\n";
	return 0;
}
