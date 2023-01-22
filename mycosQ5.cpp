#include<iostream>

using namespace std;

int main(){
	int array[] = {1, 4, 9, 13, 20, 5, 1};
	int size = sizeof(array)/sizeof(int);
	for(int i=0;i<size;i++){
		if(array[i]%2==1)
			cout << array[i] << ", ";
	}
}
