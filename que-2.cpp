#include<iostream>
using namespace std;
int main()
{
    int arrays, column;
    cout << "Enter the number of arrays: ";
    cin >> arrays;

    cout << "Enter the number of column: ";
    cin >> column;

    int array[arrays][column];

    for (int i = 0; i < arrays; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter value [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "2D arrayay list: " << endl;
    for (int i = 0; i < arrays; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int max_element = array[0][0];

    cout << "Largest element is: " << endl;
    for (int i = 0; i < arrays; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] > max_element)
            {
                max_element = array[i][j];
            }
        }
        cout << endl;
    }
    cout << max_element << endl;
    return 0;
}