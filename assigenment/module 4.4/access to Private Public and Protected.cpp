#include<iostream>
using namespace std;
class A{
	public:
		int a=30;
		private:
			int b=40;
			protected:
				int c=50;
				
				friend class B;
};
class B:public A{
		public:
		show(A& b)
		{
			cout<<"\nA :"<<a;
			cout<<"\nB :"<<b.b;
			cout<<"\nC :"<<c;
		}
};
int main()
{
	B obj;
	
	obj.show(obj);
}
