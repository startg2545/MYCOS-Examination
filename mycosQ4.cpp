#include<iostream>

using namespace std;

bool isEqual(int arr[], int rev[], int size){
	for(int i=0;i<size;i++){
		if(arr[i]==rev[i])
			return true;
	}
	return false;
}
int main(){
	int array[] = {1, 3, 10, 15};
	int size = sizeof(array)/sizeof(int);
	int reverse[size];
	for(int i=size-1;i>=0;i--){
		reverse[size-i] = array[i];
		cout << reverse[size-i] << ", ";
	}
	if(isEqual(array,reverse,size))
		cout << endl << "Return true";
	
}
