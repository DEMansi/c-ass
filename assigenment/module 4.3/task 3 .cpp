#include<iostream>
using namespace std;
class Car{
	private:
		int year;
		string company,model;
		public:
				getdata(string company,string model,int year)
			{
				this->company=company;
				this->model=model;
			    this->year=year;
			}
			setdata()
			{
				cout<<"\ncompany: "<<company;
				cout<<"\nmodel: "<<model;
				cout<<"\nyear: "<<year;
			}
};
int main()
{
	Car obj;
	obj.getdata("Tata","Neno",2023);
	obj.setdata();
}
