#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

struct Student
{
	char name[20];
	int age, year;

	Student (){
		memset(name, 0, sizeof(name));
		age = 0, year = 0;
	}
	Student (char newName[]){
		memset(name, 0, sizeof(name));
		strcpy(name, newName);
		age = 0, year = 0;
	}
	Student (char newName[], int newAge){
		memset(name, 0, sizeof(name));
		strcpy(name, newName);
		age = newAge;
		year = 0;
	}
}student1;

int main(int argc, char const *argv[])
{
	g<<student1.name<<" "<<student1.age<<" "<<student1.year<<endl;

	Student student2;
	g<<student2.name<<" "<<student2.age<<" "<<student2.year<<endl;

	Student abc("abc");
	g<<abc.name<<" "<<abc.age<<" "<<abc.year<<endl;

	Student xyz("xyz", 20);
	g<<xyz.name<<" "<<xyz.age<<" "<<xyz.year<<endl;
	return 0;
}