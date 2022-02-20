#include <iostream>
using namespace std;

int main ()
{
	int temp,n,i,j,gap;
	
	cout<<"Number of Data : ";cin>>n;
	cout<<"======================"<<endl;
	cout<<endl;
	
	int bil[n];
	
	for (int a=0;a<n;a++)
	{
		cout<<"Data["<<a<<"]= ";
		cin>>bil[a];
	}
	
	cout<<endl;
	cout<<"Data Before Ordered"<<endl;
	cout<<"======================"<<endl;
	for(int a=0;a<n;a++)
	{
		cout <<bil[a]<<" ";
	}
	cout<<endl;
	
	for (gap=n/2;gap>0;gap/=2)
	{
		for (i=gap;i<n;i+=1)
		{
			temp = bil[i];
			//for (j=i;j>=gap && bil[j-gap]>temp;j-=gap)	//ASCENDING
			for (j=i;j>=gap && bil[j-gap]<temp;j-=gap)		//DESCENDING
				bil[j]=bil[j-gap];
			bil[j]=temp;
		}
	}
	cout<<endl;
	cout<<"Data After ordered"<<endl;
	cout<<"======================"<<endl;
	for (int a=0;a<n;a++)
	{
		cout<<bil[a]<<" ";
	}
cout<< endl;

system ("pause");
}	
