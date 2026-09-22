#include<iostream>

using namespace std;

int main(){

int n ;

cin>>n;

int *ptr = new int[n];

cout<< "Value of n :"<<n;

delete [] ptr;

return 0;    
}