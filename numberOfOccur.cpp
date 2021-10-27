#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int binarySearch(int arr[], int target, int ok){
	int left = 0;
	int right = 4;
	int result = -1;

	while(left <= right){
		int mid = left + (right - left) / 2;
		if(target == arr[mid]){
			result = mid;
			if(ok == 1) right = mid - 1;
			if(ok == 2) left = mid + 1;
		}else if(target < arr[mid]){
			right = mid - 1;
		}else left = mid + 1;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int arr[5];
	int target;
	for(int i = 0; i < 5; i++){
		f>>arr[i];
	}
	f>>target;
	int firstOccur = binarySearch(arr, target, 1);
	int lastOccur = binarySearch(arr, target, 2);

	if(firstOccur == -1)g<<"not in the array"<<endl;
	else 				g<<lastOccur - firstOccur + 1<<endl;

	return 0;
}