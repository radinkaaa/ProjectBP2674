#include <iostream>
using namespace std;
int A[3][3]={{2,6,4}, {1,5,7}, {1,8,4}};
int B[3][3]={{1,3,2}, {0,2,9}, {5,11,1}};
int hasil[3][3];

void sumatrik(){
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			hasil[i][j]=A[i][j]+B[i][j];
		}
	}
}

int main(){
int i;	
for (i=0;i<3;i++){
	cout<<"["<<A[0][i]<<" "<<A[1][i]<<" "<<A[2][i]<<"]"<<endl; 
}	
}
