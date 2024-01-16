 #include<iostream>
using namespace std;
 
class A{
	public:
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
			cout<<"\nname:"<<name;
				cout<<"\ncountry:"<<country;
					cout<<"\nage:"<<age;
		}
	};
	
	int main()
	{
		A obj;
		obj.getdata("mansi","india",21);
		obj.setdata();
		
	}
