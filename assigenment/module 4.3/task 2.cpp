#include<iostream>
using namespace std;
class Cal{
 	
 	public:
 		Cal()
 		{ 
 		    int a,b;
 		    cout<<"Enter Number A :  ";
 		    cin>>a;
 		    cout<<"Enter Number B :  ";
 		    cin>>b;
 		    cout <<"addition:"<<a+b;
	        cout <<"\nsubstraction:"<<a-b;
	        cout <<"\nmultiplication:"<<a*b;
	        cout <<"\ndivision:"<<a/b;
		 }
 };
int main()
{
	
	Cal obj;

}
