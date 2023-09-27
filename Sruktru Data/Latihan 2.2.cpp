#include <iostream>

using namespace std;

int main(){
	int A[5]={2,6,4,3,1};
	for (int i=0;i<5;i++){
	cout<<"Nilai Array elemen ke "<<i+1<<"Adalah "<<A[i]<<endl;
	}

A[1]=9;A[2]=17;A[4]=31;A[0]=11;A[3]=10;

	for(int i=0;i<5;i++){
		cout<<"Nilai Array elemen ke "<<i+1<<"Adalah "<<A[i]<<endl;
	}
	
	for(int i=0;i<5;i++){
		cout<<"A["<<i<<"] : ";cin>>A[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<"Nilai Array elemen ke "<<i+1<<"Adalah "<<A[i]<<endl;	
	}	
}

