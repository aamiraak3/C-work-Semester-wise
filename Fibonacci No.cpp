#include <iostream>
#include <stdlib.h> 
using namespace std;

long  fib(int n) {
	int f0= 0; 
	int f1 =1;
	if (n <= 1){
		return n; 	
	}
    
    else {
    	int i = 1;
    	long long one, two , add;
    	one=0;
    	two = 1;
    	add = 0;
    	
    	for (int i=1;i<n;i++)
    	{
    		add = two + one;
    		one = two;
    		two = add;
		}
		return add;
	} 

	return 0 ;
}

int main() {
	int n;
	cout <<"Enter A Number : ";
	cin >> n;
    cout <<"Fibonacci Number is : " <<fib(n);
    return 0;
}
