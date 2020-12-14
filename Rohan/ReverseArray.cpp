#include <iostream>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"\nEnter array elements: ";
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cout<<"\nUnsorted array: ";
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<"\nSorted array: ";
	for(int i=0;i<n/2;++i){
		swap(arr[i],arr[n-1-i]);
	}
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}