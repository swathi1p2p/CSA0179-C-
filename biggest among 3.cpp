#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "enter a value:";
	cin >> a;
	cout << "enter b value:";
	cin >> b;
	cout << "enter c value:";
	cin >> c;
  if(a >= b && a>=c)
  	cout << a;
  else if(b>=a && b>=c)
  cout << b;
  else 
  cout << c;
	return 0;
}
