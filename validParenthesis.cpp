#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");
char Stack[129]; int idx;

void push(char x)
{
	idx++;
	Stack[idx] = x;
}

void pop()
{
	Stack[idx] = ' ';
	idx--;
}

bool isEmpty()
{
	if(idx >= 1)return false;
	else	    return true;
}

int top(){
	return Stack[idx];
}

int main()
{
	int test;
	f>>test;
	while(test--){

		bool flag = true;
		idx = 0;
		string str;
		f>>str;

		for(int i = 0; i < str.size(); i++){
			if(str[i]=='(' or str[i]=='['){
				push(str[i]);
			}else{
				char open = top();

				if(isEmpty()){
					flag = false;
					break;
				}else if(open == '(' && str[i] == ')'){
					pop();
				}else if(open == '[' && str[i] == ']'){
					pop();
				}else{
					flag = false;
					break;
				}
			}
		}
		if(!isEmpty() || !flag){
			cout<<"No"<<endl;
		}else cout<<"Yes"<<endl;
	}
}