#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

struct Books
{
	string title;
	char author[10];
	double price;
}book1; // golbally assign structure

void printBook2(Books book2){
	g<<book2.title<<endl;
	g<<book2.price<<endl;
}

int main(int argc, char const *argv[])
{
	book1.title = "Book1 Title";
	strcpy(book1.author, "Book1 author");
	book1.price = 100.2;
	g<<book1.title<<endl;
	g<<book1.author<<endl;
	g<<book1.price<<endl;

	Books book2;
	book2.title = "Book2 title";
	book2.price = 220.4;
	printBook2(book2);
	return 0;
}