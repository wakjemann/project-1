#include<iostream>
using namespace std;

int main()
{
	char huruf;
a:
	cout<<"masukkan huruf(a/l)=";
	cin>>huruf;
	
	if (huruf == 'a')
		{
		cout<<"   **** \n ********\n***    ***\n**********\n**********\n***    ***\n***    ***"<<endl;
		goto a;
		}
	else if(huruf == 'l')
		{
		cout<<"***   \n***   \n***   \n***   \n***   \n************\n************"<<endl;
		goto a;
		}
	
	return 0;
 }

