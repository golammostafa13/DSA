#include<bits/stdc++.h>
using namespace std;

// ifstream f("data.in");
ofstream g("data.out");
int arr[100000];

int firstOccur(int target, int n){
	int left = 0;
	int right = n - 1;
	int res = -1;

	while(left <= right){
		int mid = left + (right - left)/2;
		if(arr[mid] == target){
			res = mid;
			right = mid - 1;
		}else if(arr[mid] < target){
			left = mid + 1;
		}else right = mid - 1;
	}
	return res;
}

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n, q;
	scanf("%d %d", &n, &q);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	while(q--){
		int target;
		scanf("%d", &target);
		// printf("%d\n", firstOccur(target));
		g<<firstOccur(target, n)<<endl;
	}

	return 0;
}