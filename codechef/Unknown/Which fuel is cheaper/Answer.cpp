#include <iostream>
using namespace std;

int main() {
	long long int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int pet,dei,Ipet,Idei,K;
	    cin>>pet>>dei>>Ipet>>Idei>>K;
	    pet+=Ipet*K;
	    dei+=Idei*K;
	    if(pet<dei) cout<<"PETROL"<<endl;
	    else if(pet>dei) cout<<"DIESEL"<<endl;
	    else cout<<"SAME PRICE"<<endl;
	}
	
	return 0;
}
