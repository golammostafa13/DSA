#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

struct Car
{
	int speed, price;
}cars[100];

bool cmp (Car A, Car B){
	// if(A.speed != B.speed)return A.speed > B.speed;
	// else return A.price > B.price;

	return (1.0 * A.speed / A.price) > (1.0 * B.speed / B.price); 
}

int main(int argc, char const *argv[])
{
	cars[0].speed = 50, cars[0].price = 20;
	cars[1].speed = 150, cars[1].price = 200;
	cars[2].speed = 40, cars[2].price = 100;
	cars[3].speed = 270, cars[3].price = 400;
	cars[4].speed = 50, cars[4].price = 250;
	cars[5].speed = 150, cars[5].price = 700;
	cars[6].speed = 50, cars[6].price = 280;

	sort(cars+0, cars+7, cmp);

	for(int i = 0; i < 7; i++){
		g<<cars[i].speed<<" "<<cars[i].price<<endl;
	}

	return 0;
}