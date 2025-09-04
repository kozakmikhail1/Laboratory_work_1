#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

class Matrix
{
    private:
    int number_of_rows;
    int number_of_columns;

    std::vector<std::vector<int>> matrix;

    public:
    int get_numbers_strs ()const
    {
        return number_of_columns;
    }
    int get_numbers_columns ()const
    {
        return number_of_rows;
    }

    int get_matrix_value(int str_index, int column_index) const
    {
        return matrix[str_index][column_index];
    }

    Matrix() : number_of_rows(2), number_of_columns(2)
    {
        matrix.resize(number_of_rows, std::vector<int>(number_of_columns, 0));
    }
    
    explicit Matrix(int rang) : number_of_rows(rang), number_of_columns(rang)
    {
        matrix.resize(number_of_rows, std::vector<int>(number_of_columns, 0));
    }

    Matrix(int rows, int columns) : number_of_rows(rows), number_of_columns(columns)
    {
        matrix.resize(number_of_rows, std::vector<int>(number_of_columns, 0));
    }

    void Create()
    {
        for(int i = 0;i < number_of_rows;i++)
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
        for(int i = 0;i < number_of_rows;i++)
        {
            for(int j = 0;j < number_of_columns;j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    void Subtraction(const Matrix &subtractor)
    {
        if(subtractor.get_numbers_columns() == number_of_columns && subtractor.get_numbers_strs() == number_of_rows)
        {
            for(int i = 0;i < number_of_rows;i++)
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
};