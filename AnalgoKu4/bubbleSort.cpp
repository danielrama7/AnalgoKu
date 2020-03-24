/*
	Nama		 	  : Daniel Rama H.
	Kelas		      : A
	NPM 		 	  : 140810180045
	Tanggal 		  : 23 Maret 2020
	Deskripsi Program : Bubble sort
*/


#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int arr[100],n,temp;
	cout<<"Banyak nilai yang akan dimasukkan : ";cin>>n;
	
	for(int i=0;i<n;++i){
		cout<<"Nilai ke-"<<i+1<<" : ";cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nHasil dari Bubble Sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}







