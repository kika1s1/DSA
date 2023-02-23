#include <iostream>

using namespace std;

int main()

{   int x,y;  // Input any two numbers from the user.

cout << "Enter the numbers:\n"; 

cin>>x>>y;

int *num_1,*num_2,temp; //Declaring pointers

num_1=&x;  // Declaring address 

num_2=&y; 

temp=*num_1; //Swap procedure starts

*num_1=*num_2;

*num_2=temp;

cout<<"Numbers after swapping:";   //Numbers will be displayed after swap

cout<<"\nfirst number="<<x;        //First number after swap

cout<<"\nsecond number="<<y;       // Second number after swap

return 0;

}
