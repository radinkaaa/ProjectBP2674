#include <iostream>

using namespace std;

int main(){
	int jml;
	int i;
	int cari;
	int arr[50];
	int tanda=-1;
	cout<<"Masukkan banyaknya Bilangan = ";
	cin>>jml;
	for(i=0;i<jml;i++){
		cout<<"Masukkan Bilangan Ke-"<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Isi Dari Array :"<<endl;
	for(i=0;i<jml;i++)
	cout<<" "<<arr[i];
	cout<<"\n\nMasukkan Data Yang Dicari : ";
	cin>>cari;
	for(i=0;i<jml;i++){
		if(cari==arr[i])
		{
			tanda=i;break;
		}
	}
	if(tanda!=-1)
	cout<<"\n\n Data Ditemukan";
	else
	cout<<"\n\n Data Tidak Ditemukan";
	return 0;
	}
