#include <iostream>
using namespace std;

class Matrix
{
    private:
    int number_of_strs;
    int number_of_columns;

    int **matrix = nullptr;

    public:
    int get_numbers_strs ()const
    {
        return number_of_columns;
    }
    int get_numbers_columns ()const
    {
        return number_of_strs;
    }

    int get_matrix_value(int str_index, int column_index) const
    {
        return matrix[str_index][column_index];
    }

    Matrix() : number_of_columns (2), number_of_strs(2)
    {
        matrix = new int* [number_of_strs];
        for(int i = 0;i < number_of_columns;i++)
        {
            matrix[i] = new int[number_of_columns]();
        }
    }
    Matrix(int rang) : number_of_columns(rang), number_of_strs(rang)
    {
        matrix = new int* [number_of_strs];
        for(int i = 0;i < number_of_columns;i++)
        {
            matrix[i] = new int[number_of_columns]();
        }
    }

    Matrix(int number_of_strs, int number_of_columns) : number_of_strs(number_of_strs), number_of_columns(number_of_columns)
    {
        matrix = new int* [number_of_strs];
        for(int i = 0;i < number_of_columns;i++)
        {
            matrix[i] = new int[number_of_columns]();
        }
    }

    void Create()
    {
        for(int i = 0;i < number_of_strs;i++)
        {
            cout << "Enter "<< i + 1 <<"-th line of matrix" << endl;
            for(int j  = 0;j < number_of_columns;j++)
            {
                cin >> matrix[i][j]; 
            }
        }

    }

    void Show() const
    {
        for(int i = 0;i < number_of_strs;i++)
        {
            for(int j = 0;j < number_of_columns;j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    void Subtraction(Matrix &subtractor)
    {
        if(subtractor.get_numbers_columns() == number_of_columns && subtractor.get_numbers_strs() == number_of_strs)
        {
            for(int i = 0;i < number_of_strs;i++)
            {
                for(int j = 0;j < number_of_columns;j++)
                {
                    matrix[i][j] -= subtractor.get_matrix_value(i,j);
                }
            }
        }
        else
        {
            cout << "Error, Matrixs are not equal\n";
        }
    }

    ~Matrix()
    {
        delete[] matrix;
    }
};