#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int Queue[10], frontend = 0, backend = -1;

void push(int x){
	backend++;
	Queue[backend] = x;
}

void pop(){
	Queue[frontend] = 0;
	frontend++;
}

bool isEmpty(){
	if(backend < frontend)return true;
						  return false;
}

int top(){
	if(!isEmpty())return Queue[frontend];
	return -1;
}

int main(int argc, char const *argv[])
{
	frontend = 0;
	backend = -1;

	push(1);
	push(2);
	push(3);

	g<<top()<<endl;

	pop();
	g<<top()<<endl;
	pop();
	pop();
	g<<isEmpty()<<endl;

	return 0;
}
