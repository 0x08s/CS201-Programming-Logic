#include <iostream>

using namespace std;

int main(){

int n;

cout<<"Value of n :";

cin>>n;

int *ptr = new int[n];


for(int i = 0; i < n;i++){  

cout<<"Enter the value :";

cin>>ptr[i];

}

for(int i = 0; i < n;i++){  

cout<< ptr[i];

}

delete [] ptr;


return 0;    
}