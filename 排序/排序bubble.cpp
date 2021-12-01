#include<iostream>
using namespace std;

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
    
    int temp;
    int i;
    for(int step=0;step<in_num-1;step++)
    {
        for(i=0;i<in_num-1-step;i++)
        {
            if(array[i]<array[i+1])
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    
    cout<<"output the number"<<endl;
    for(i=0;i<ou_num;i++)
    {
        cout<<array[i]<<" ";
    }
}
