#include<iostream>
using namespace std;
class Circle{
	private:
	 float radius, area, PI=3.14,C;
	 public:
	 	round()
		{
		 cout<<"Enter radius of circle:";
	 	cin>>radius;
	 	area=PI *radius * radius;
	 	cout<< "Area of circle:"<<area;
	 	C=2*PI*radius;
	    cout<< "\ncircumference of circle:"<<C;
	 }
};
int main()
{
	Circle obj;
	obj.round();
}
