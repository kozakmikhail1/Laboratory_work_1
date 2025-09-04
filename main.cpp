#include "header.h"

int main()
{
    Matrix first(2);
    Matrix secound (2,2);

    first.Create();
    secound.Create();

    first.Show();
    secound.Show();

    first.Subtraction(secound);
    first.Show();

    
    return 0;
}