#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    void transposeMatrix(vector<vector<int>> matrix)
    {

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        cout << "The Transposed matrix is: \n";
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void AddMatrices(vector<vector<int>> matrix_1, vector<vector<int>> matrix_2)
    {
        vector<vector<int>> matrix_3;
        cout << "The addition of the two matrices : \n";
        for (int i = 0; i < matrix_1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < matrix_1[i].size(); j++)
            {
                int var;
                var = matrix_1[i][j] + matrix_2[i][j];
                temp.push_back(var);
            }
            matrix_3.push_back(temp);
        }

        for (int i = 0; i < matrix_3.size(); i++)
        {
            for (int j = 0; j < matrix_3[i].size(); j++)
            {
                cout << matrix_3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void productMatrices(vector<vector<int>> matrix_1, vector<vector<int>> matrix_2)
    {
        vector<vector<int>> matrix_3;
        int sum = 0;
        cout << "The multiplication of the two matrices: \n";

        for (int i = 0; i < matrix_1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < matrix_2.size(); j++)
            {
                sum = 0;
                for (int k = 0; k < matrix_1[i].size(); k++)
                {
                    sum += matrix_1[i][k] * matrix_2[k][j];
                }
                temp.push_back(sum);
            }
            matrix_3.push_back(temp);
        }

        for (int i = 0; i < matrix_3.size(); i++)
        {
            for (int j = 0; j < matrix_3[i].size(); j++)
            {
                cout << matrix_3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }
};

int main()
{
    Matrix obj;
    int var;
    int n;
    cout << "Enter the size of both square matrixes : ";
    cin >> n;

    vector<vector<int>> matrix_1;
    cout << "Enter the matrix_1 elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter value for cell "<<i<<", "<<j<<" : ";
            cin >> var;
            temp.push_back(var);
        }
        matrix_1.push_back(temp);
    }

    vector<vector<int>> matrix_2;
    cout << "Enter the matrix_2 elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter value for cell "<<i<<", "<<j<<" : ";
            cin >> var;
            temp.push_back(var);
        }
        matrix_2.push_back(temp);
    }

    unsigned choice;

    while (1)
    {
        system("cls");
        cout << "Enter 1 to get the Sum of matrix_1 and matrix_2. \n";
        cout << "Enter 2 to get the Product of matrix_1 and matrix_2.  \n";
        cout << "Enter 3 to get the Transpose of matrix_1 and matrix_2.  \n";
        cout << "Enter any other value to exit. \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.AddMatrices(matrix_1, matrix_2);
            break;

        case 2:
            obj.productMatrices(matrix_1, matrix_2);
            break;

        case 3:
            unsigned int key;
            cout << "Press 1 for matrix_1 and 2 for matrix_2 : ";
            cin >> key;

            if (key == 1)
                obj.transposeMatrix(matrix_1);
            else if (key == 2)
                obj.transposeMatrix(matrix_2);

            break;

        default:
            return 0;
        }
    }

    return 0;
}
