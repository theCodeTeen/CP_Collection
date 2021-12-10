#include <iostream>
using namespace std;
void print()
{
	cout<<8<<" "<<8<<endl;
	cout<<7<<" "<<7<<endl;
	cout<<6<<" "<<8<<endl;
	cout<<1<<" "<<3<<endl;
	cout<<2<<" "<<4<<endl;
	cout<<1<<" "<<5<<endl;
	cout<<4<<" "<<8<<endl;
	cout<<3<<" "<<7<<endl;
	cout<<2<<" "<<8<<endl;
	cout<<1<<" "<<7<<endl;
	cout<<7<<" "<<1<<endl;
	cout<<8<<" "<<2<<endl;
	cout<<7<<" "<<3<<endl;
	cout<<5<<" "<<1<<endl;
	cout<<8<<" "<<4<<endl;
	cout<<7<<" "<<5<<endl;
	cout<<8<<" "<<6<<endl;
	cout<<3<<" "<<1<<endl;
	
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	cin>>x>>y;
	if(x==y)
	{
		
		if(x!=1&&y!=1)
		{cout<<19<<endl;
		cout<<1<<" "<<1<<endl;
	   	print();
      	        }
		else
		{
		cout<<18<<endl;
	
		print();
	}
	}
	else if(x-y==2)
	{
		cout<<20<<endl;
		cout<<y+1<<" "<<y+1<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	else if(x-y==-2)
	{
		cout<<20<<endl;
		cout<<x+1<<" "<<x+1<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	else if(x-y==4)
	{
		cout<<20<<endl;
		cout<<y+2<<" "<<y+2<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	else if(x-y==-4)
	{
		cout<<20<<endl;
                cout<<x+2<<" "<<x+2<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	else if(x-y==6)
	{
		cout<<20<<endl;
		cout<<y+3<<" "<<y+3<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	else if(x-y==-6)
	{
		cout<<20<<endl;
		cout<<x+3<<" "<<x+3<<endl;
		cout<<1<<" "<<1<<endl;
		print();
	}
	}
	return 0;
}