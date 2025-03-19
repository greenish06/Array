#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout <<"Enter the number of row: ";
    cin >>row;

    cout <<"Enter the number of column: ";
    cin >>column;

    int array[row][column];

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cout <<"Enter value [" << i << "][" << j << "]: ";
            cin >>array[i][j];
        }
    }

    cout << "2D array list: " <<endl;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cout<<array[i][j] << " ";
        }
        cout<<endl;
    }

    for (int i=0; i<row; i++)
    {
        int sum=0;
        for (int j=0; j<column; j++)
        {
            sum += array[i][j];
        }
        cout<<"sum of row " <<i<< " = " <<sum <<endl;
        cout<<endl;
    }
    for (int j=0; j<column; j++)
    {
        int sum=0;
        for (int i=0; i<row; i++)
        {
            sum += array[i][j];
        }
        cout <<"sum of column: "<< j << " = " <<sum <<endl;
        cout <<endl;
    }
    return 0;
}