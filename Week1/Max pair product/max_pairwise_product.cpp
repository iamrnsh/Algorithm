#include <iostream>
#include <vector>
using namespace std;

void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}


long long maxproduct(vector<int> &array,int num)
{
	int i;
	int f,s=0;
	f=array[0];
	for (i=1;i<num;++i)
	{
		if(array[i]>s)
		{
			
			swap(&array[i],&s);
			if(s>f)
			{
				swap(&s,&f);
			}
		}
	}
	return (long long)f*(long long)s;
}



int main()
{
	int n;
	cin>>n;
	vector<int> numbers(n);
	for(int i=0;i<n;++i)
	{
		cin>>numbers[i];
	}
	
	long long product=maxproduct(numbers,n);
	cout<<product;
	return 0;	
}
