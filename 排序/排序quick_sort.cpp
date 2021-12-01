#include<iostream>
using namespace std;

void qucik_sort(int left, int right, int *arr)
{
    if(left<right)
    {
		int i=left;
		int j=right;
		int sign=arr[left];
		while(i<j)
		{
			while(arr[j]<=sign&&i<j)
			{
				j--;
			}
			if(i!=j)
			{
				arr[i]=arr[j];
			}

			while(arr[i]>=sign&&i<j)
			{
				i++;
			}
			if(i!=j)
			{
				arr[j]=arr[i];
			}
		}
		arr[i]=sign;

		qucik_sort(left,i-1,arr);
		qucik_sort(j+1,right,arr);
    }
}

int main()
{
    int in_num, ou_num, num;
    cout<<"input the quantity of numbers and the quantity you want to output:"<<endl;
    cin>>in_num>>ou_num;
    int array[in_num];
    cout<<"input the numbers"<<endl;
    for(int i=0;i<in_num;i++)
    {
        cin>>num;
        array[i]=num;
    }

    qucik_sort(0,in_num-1,array);

    cout<<"output the number"<<endl;
    for(int i=0;i<ou_num;i++)
    {
        cout<<array[i]<<" ";
    }
}
