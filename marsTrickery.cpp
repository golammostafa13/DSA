#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[10], B[10];

int main(int argc, char const *argv[])
{
	for(int i = 1; i <= 6; i++){
		f>>A[i];
	}

	int q;
	int helper=0;
	f>>q;
	while(q--){
		int L, R, val;
		f>>L>>R>>val;
		B[L] += val;
		B[R+1] -= val;
	}

	for(int i = 1; i <= 6; i++){
		helper += B[i];
		A[i] += helper;
	}

	for(int i = 1; i <= 6; i++){
		g<<A[i]<<" ";
	}g<<endl;
	return 0;
}