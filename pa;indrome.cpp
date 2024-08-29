#include <iostream>
using namespace std;


int main() {
    int n,s1,s2 = 0, rem;
    cout<<"enter a string:";
    cin>>n;
    s1=n;
    while(n!=0){
    	rem=n%10;
    	s2=s2*10+rem;
    	n/=10;
	}
	if(s1==s2){
		cout<<"it is palindrome";
		
	}else{
		cout<<"it is not a palindrome";
	}

    return 0;
}
