#include <iostream>
#include <conio.h>
using namespace std;



void multMat(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < rowFirst; i++)
    {
        for (int j = 0; j < columnSecond; j++)
        {
            for (int k = 0; k < columnFirst; k++)
            {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void sumSubtMat(int firstMatrix[][10], int secondMatrix[][10], int sum[][10], int subt[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	if ( (rowFirst != rowSecond) && (columnFirst != columnSecond))
	{
        cout << "A matrix can only be added to another matrix if the two matrices have the same dimensions" << endl;
	} else
	{
        for (int i = 0; i < rowFirst; ++i) {
            for (int j = 0; j < columnFirst; ++j) {
                sum[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
                subt[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
            }
        }
	}
}


void display (int mult[][10], int sum[][10], int subt[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    cout << "Multiplication of two matrix is:" << endl;
	if (columnFirst != rowSecond)
	{
        cout << "NOT POSSIBLE";
    }
    else {

        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < columnSecond; j++)
            {
                cout << mult[i][j] << " ";
                if (j == columnSecond - 1)
                    cout << endl << endl;
            }
        }
    }
	
    cout << endl << "Sum of two matrix is: " << endl;
    if ((rowFirst != rowSecond) || (columnFirst != columnSecond))
    {
        cout << "NOT POSSIBLE" << endl;
    }
    else {
        for (int i = 0; i < rowFirst; i++) {
            for (int j = 0; j < columnFirst; j++)
            {
                cout << sum[i][j] << "  ";
                if (j == columnFirst - 1)
                    cout << endl;
            }
        }
    }

    cout << endl << "Subtraction of two matrix is: " << endl;
    if ((rowFirst != rowSecond) || (columnFirst != columnSecond))
    {
        cout << "NOT POSSIBLE";
    }
    else {
        for (int i = 0; i < rowFirst; i++)
            for (int j = 0; j < columnFirst; j++)
            {
                cout << subt[i][j] << "  ";
                if (j == columnFirst - 1)
                    cout << endl;
            }
    }
}

int main()
{
    int a[10][10], b[10][10], mult[10][10], sum[10][10], subt[10][10], r1, c1, r2, c2, i, j;
    do {
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;


        cout << endl << "Enter elements of matrix 1:" << endl;
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
            {
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }

        cout << endl << "Enter elements of matrix 2:" << endl;
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> b[i][j];
            }
        cout << endl;

        multMat(a, b, mult, r1, c1, r2, c2);
        sumSubtMat(a, b, sum, subt, r1, c1, r2, c2);

        display(mult, sum, subt, r1, c1, r2, c2);
        cout << "Press Esc to exit" << endl;
    } while (_getch() != 27);
    

    return 0;
}