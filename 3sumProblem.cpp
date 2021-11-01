#include<bits/stdc++.h>
using namespace std;

// ifstream f("data.in");
// ofstream g("data.out");
long long ar[1000], sum, target;

bool binarySearch(long long val, int left, int n){
	int right = n - 1;
	while(left <= right){
		int mid = left + (right - left) / 2;
		if(ar[mid] == val)return true;
		else if(ar[mid] > val) right = mid - 1;
		else left = mid + 1;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	while(test--){
		int n;
		int ok = 0;
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>ar[i];
		}

		cin>>target;
		sort(ar+0, ar+n);

		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(binarySearch(target - ar[i] - ar[j], j + 1, n)) ok = 1;
			}
		}
		if(ok)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}