#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int y = 20;
	int z = -30;
	int a = 29;
	cout<<x+y<<"\n";
	cout<<x-y<<"\n";
	cout<<x*y<<"\n";
	cout<<x/y<<"\n";
	cout<<x%y<<"\n";
	cout<<z%a<<"\n";
	cout<<a%z<<"\n";

	//cout<<x/0<<"\n"; FLOATING POINT EXCEPTION

	cout<<x<<"\n";
	int b = x++;
	cout<<x<<"\n";
	cout<<b<<"\n";
	int c = ++x;
	cout<<x<<"\n";
	cout<<c<<"\n";
}

//THE SIGN OF THE ANSWER IN CASE OF X%Y DEPENDS ON THE FIRST LITERAL.
//% IS NOT PERFORMED ON FLOAT.

