#include<iostream>
using namespace std;
void selection_sort(int a[])
{
	int temp,i,j,k;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(k=0;k<10;k++)
	{
		cout<<a[k]<<"\t";
	}
						
}
int main(){
	
	int a[10],i;
	cout<<"Enter 10 integer value:";
	
	for(i=0;i<10;i++){
	cin>>a[i];
	}
	selection_sort(a);
	
	return 0;
}
	
	
	
