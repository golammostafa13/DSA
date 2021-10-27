#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

bool CMP(int x, int y){
	return x < y;
}

void printArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		g<<arr[i]<<" ";
	}g<<endl;
}

void ascendingOrder(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j])swap(arr[i], arr[j]);
		}
	}
	printArr(arr, n);
}

void descendingOrder(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] < arr[j])swap(arr[i], arr[j]);
		}
	}
	printArr(arr, n);
}

void STLsort(int arr[], int n){
	sort(arr+0, arr+n, CMP);
	printArr(arr, n);
}

int main(int argc, char const *argv[])
{
	int arr[5];
	for(int i = 0; i < 5; i++){
		f>>arr[i];
	}
	ascendingOrder(arr, 5);
	descendingOrder(arr, 5);
	STLsort(arr, 5);

	return 0;
}