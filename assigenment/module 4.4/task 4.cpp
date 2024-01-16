#include<iostream>
using namespace std;
class A{
	public:
		string name;
		show()
		{
			cout<<"\nenter name : ";
			cin>>name;
		}
};
class B{
	public:
		int m,e,s,t,avg;
		marks()
		{
			cout<<"\nenter marks of maths : ";
			cin>>m;
			cout<<"\nenter marks of english : ";
			cin>>e;
			cout<<"\nenter marks of science : ";
			cin>>s;
		}
};
class C:public A,public B{
	public:
		oper()
		{
			t=m+e+s;
			cout<<"\nyour total : "<<t;
			avg=t/3;
			cout<<"\nyour avg mark : "<<avg;
		}
};
int main(){
	C obj;
	obj.show();
	obj.marks();
	obj.oper();
}#include<iostream>
using namespace std;
class Students{
	public:
		show()
		{
		int rollno;
		string name;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Roll.no : ";
		cin>>rollno;
	}
};
class Test :public Students{
	public: 
	int m,s;
	marks()
		{
			cout<<"\nenter marks of maths : ";
			cin>>m;
		    cout<<"\nenter marks of science : ";
			cin>>s;
		}
	
};
class Result:public Test{
	public:
		int t;
	oper()
	{
		    t=m+s;
			cout<<"\nyour total : "<<t;
	}
};
int main()
{
	Result obj;
	obj.show();
	obj.marks();
	obj.oper();
	
}
