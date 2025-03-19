#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:-";
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the index"<<i<<"value:-";
        cin>>array[i];
    }
    cout<<"array list:-"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"Negative number list:-"<<endl;

    for(int i=0; i<n; i++)
    {
        if(array[i]<0)
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}