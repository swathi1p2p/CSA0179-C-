#include<iostream>
using namespace std;
int main(){
	int n,i;
	bool isprime=true;
	cout << "enter a number:";
	cin >> n;
	if(n<=1){
		isprime=false;
	}else{
		for(i=2;i<=n/2;i++){
			if(n%1==0){
				isprime=false;
				break;
			}
		}
	}
	if(isprime)
	cout<<"is prime"<<endl;
	else
	cout <<"not prime"<<endl;
	return 0;
}
