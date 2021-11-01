#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int fibonacci(int n){
	int dp[10];
		dp[0] = 0;
		dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i-1] + dp[i - 2];
	}
	return dp[n];
}

int oneTwoComb(int n){
	int dp[10];
	dp[0] = 1;
	dp[1] = 1;

	for(int i = 2; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

int oneTwoThreeComb(int n){
	int dp[10];
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for(int i = 3; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{

	int n;
	f>>n;
	g<<fibonacci(n)<<endl;
	g<<oneTwoComb(n)<<endl;
	g<<oneTwoThreeComb(n)<<endl;
	return 0;
}