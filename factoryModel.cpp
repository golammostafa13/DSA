#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

struct Car
{
	string carModel;
	int id;
	int year;
}cars[100];

void printCar(Car variableCar){
	g<<variableCar.id<<" "<<variableCar.carModel<<" "<<variableCar.year<<endl;
}

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 100; i++){
		cars[i].id = i;
		cars[i].carModel = "Fast and Furious";
		cars[i].year = 2021;
	}

	printCar(cars[10]);
	printCar(cars[50]);
	return 0;
}