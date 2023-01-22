#include<iostream>
#include<string>
using namespace std;

class Result {
	public:
		string month;
		int SumValue = 0;
		
	Result() { }
	Result(string x, int y){
		month = x;
		SumValue = y;
	}
};

bool checkRecursive(string A, string check[], int time){
	for(int i=0;i<time;i++){
		if(A==check[i])
			return false;
	}
	check[time] = A;
	return true;
}
int main(){
	string arrayA[] = {"Jan", "Feb", "Jan", "Apr", "Mar", "Apr", "May", "Apr"};
	int arrayB[] = {10, 20, 30, 40, 50, 60, 70, 70};
	int size = sizeof(arrayB)/sizeof(int);
	string check[size];
	Result results[size];
	
	for(int i=0;i<size;i++){
		if(checkRecursive(arrayA[i], check, i)==0){
			for(int j=0;j<i;j++){
				if(arrayA[i]==arrayA[j])
					results[j] = Result(arrayA[j], results[j].SumValue + arrayB[i]);
			}
		}else{
			results[i] = Result(arrayA[i], arrayB[i]);
			
		}
	}
	cout << "Result = [" << endl;
	for(int i=0;i<size;i++){
		if(checkRecursive(arrayA[i], check, i)==1)
			cout << "	{ Month: " <<results[i].month << ", Sum Value: " << results[i].SumValue << "}," << endl;
	}
	cout << "]";
}
