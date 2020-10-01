my hackerearth solution of MAXIMUM SUM problem


#include<iostream>

using namespace std;

int main()
{
    int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0,count=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]>=0){
		sum=sum+arr[j];
		count++;
		} 
		
	}
	
	cout<<sum<<" "<<count;
	return 0;
}
