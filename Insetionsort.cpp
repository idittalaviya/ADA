#include<iostream>
using namespace std;
void insertion_sort(int a[])
{
	int key,i,k;
	for(int j=0;j<10;j++)
	{
		i=j-1;
		key=a[j];
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
		
		
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
	insertion_sort(a);
	
	return 0;
}
	
	
	
