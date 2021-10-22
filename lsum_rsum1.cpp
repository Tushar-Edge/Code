//find the position in the array where sum of its left side and right side elements is equal

#include<bits/stdc++.h>
using namespace std;
int check_sum(int a[],int n)
{
	int prearray[n];
	int sufarray[n];
	int presum=0;
	int sufsum=0;
	for(int i=0;i<n;i++)
	{
		presum=presum+a[i];
		prearray[i]=presum;
		
	}
	sufsum=presum;
	sufarray[0]=sufsum;
	for(int i=0;i<n-1;i++)
	{
		
		sufsum=sufsum-a[i];
		sufarray[i+1]=sufsum;
	}
	for(int i=0;i<n;i++)
	{
		if(prearray[i]==sufarray[i])
				return i;
	}
		
}
int main()
{
	int n;
	
	cout<<"enter the length";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		
		cin>>arr[i];
		
	}
	int position=check_sum(arr,n);
	cout<<"position"<<position+1;
	
	
	
	
}
