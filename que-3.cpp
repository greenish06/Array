#include<iostream>
using namespace std;
int main()
{
    int row, columns;
    cout <<"Enter the number of row: ";
    cin >>row;

    cout <<"Enter the number of columns: ";
    cin >>columns;

    int array[row][columns];

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout <<"Enter value [" << i << "][" << j << "]: ";
            cin >>array[i][j];
        }
    }

    cout<<"2D array list: " <<endl;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout<<array[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<"transpose of 2d array: "<<endl;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout<<array[j][i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}