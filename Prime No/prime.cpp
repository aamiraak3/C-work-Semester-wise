#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter Number : ";
	cin>>a;
	if(a > 1){
		for(int i = 2 ; i <= a ;i++){
			if(a % i == 0 || a % 3 == 0){
				cout << a <<" is not Prime Number." << endl;
				return 0;
			}
			else{
				cout << a << " is Prime Number." << endl;
				return 0;
			}
	  	}		
	}
	else{
		cout << a << " is not Prime Number." << endl;
	}		
}
