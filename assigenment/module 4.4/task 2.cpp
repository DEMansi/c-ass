 #include<iostream>
using namespace std;
class Rectangle{
	public:
		int lenght,width,area,P;
		show()
		{
		cout<<"Enter Lenght:";
	 	cin>>lenght;
	 	cout<< "\nEnter Width:";
	    cin>>width;
	     
	    }
};
class Area:public Rectangle{
	public:  
		myfun()
		{    area=lenght*width;
	        cout<<"\nThis is Rectangle area : "<<area;
		}
};
int main()
{
	Area obj;
	obj.show();
	obj.myfun();
}
