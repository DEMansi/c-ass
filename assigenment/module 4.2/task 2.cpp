#include<iostream>
using namespace std;
class person{
	private:
		int age;
		string name,country;
		public:
			getdata(string name,string country,int age)
			{
				this->name=name;
				this->country=country;
			    this->age=age;
			}
			setdata()
			{
				cout<<"\nname: "<<name;
				cout<<"\ncountry:"<<country;
				cout<<"\nage:"<<age;
			}
};
int main()
{
	person obj;
	obj.getdata("Mansi","chital",21);
	obj.setdata();
}
