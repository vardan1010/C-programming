#include<bits/stdc++.h>//this includes all the library in c++.
using namespace std;
class quadratic
{
	protected:
	float a,b,c,d,x1,x2;
	public:
	void dval()//for the value of discriminant i.e;d 
	{ 
		d=pow(b,2)-(4*a*c);
	}
	quadratic(float A=1,float B=0,float C=0)
	{
		a=A;
		b=B;
		c=C;
		dval();
	}
	 void calcroots()
	 {  dval();
	 	x1=(-b+sqrt(d)) / 2*a;
	 	x2=(-b-sqrt(d)) / 2*a;
	 	
	 }
	 void inputcoeff()
	 {
	 	cout<<"enter a,b,c-";
	 	cin>>a>>b>>c;
		calcroots();
	 }
};
class quadratic2:public quadratic
{
	protected:
		float rp,ip;
		public:
		void parts()
		{
			dval();
			rp=-b/2*a;
			ip=sqrt(abs(d))/2*a;
		}
		void showroots()
	 {
	 	dval();
	 	if(d>=0)
	 	{
	 		cout<<x1;
			cout<<endl<<x2; 
		 }
		 else 
		 {
		 	parts();
		 	cout<<rp<<"+"<<ip<<"i"<<endl;
			cout<<rp<<"-"<<ip<<"i"<<endl;
		 }
	 }
};
int main()
{
	quadratic2 q;
	q.inputcoeff();
	q.showroots();
	return 0;
}
