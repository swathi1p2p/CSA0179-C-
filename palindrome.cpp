#include<iostream>
using namespace std;
int main(){
	int n,org,remind,rev=0;
	cout << "enter a number:";
	cin >> n;
	org=n;
	while(n!=0){
		remind=n%10;
		rev=rev*10+remind;
		n/=10;
	}
	if(rev==org){
	cout << "palindrome";
}
else {
	cout << "not palindrome";
}
return 0;
}
