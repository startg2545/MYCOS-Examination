#include<iostream>
using namespace std;

int main(){
	int Array[] = {0,50,75,-1,100,-20,15};
	int size = sizeof(Array)/sizeof(int);
	for ( int i=0;i < size ; i++){
		for (int j = 0; j< size; j++){
			if (Array[i] < Array[j]){
				int swap;
				swap = Array[i];
				Array[i] = Array[j];
				Array[j] = swap;
			}
		}
	}
	cout << "2nd Minimum is "<< Array[1] << endl;
	cout << "2nd Maximum is "<< Array[size-2] << endl;
	// array index 0 is 1st minimum and array index size-1 is 1st maximum
	return 0;
}

