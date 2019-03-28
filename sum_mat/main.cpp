#include <iostream>
#include <algorithm>
template<class Matrix>
int sum_mat(Matrix matrix, int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j=1+i; j < size; ++j)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

 template<class Matrix>
 void max_min_element_matrix(Matrix matrix, int colum, int row)
 {
     int min_el = matrix[0][0];
     int max_el = matrix[0][0];
     for(int i = 0; i < colum; ++i)
     {
         for(int j = 0; j < row; ++j)
         {
             if(min_el > matrix[i][j])
             {
                 min_el = matrix[i][j];
             }
             if(max_el < matrix[i][j])
             {
                 max_el = matrix[i][j];
             }
         }
         std::cout << min_el << " " << max_el << std::endl;
     }
 }



 /*template<class Matrix>
 int sum_mul_mat(Matrix matrix, int column, int k)
 {
     for(int i = 0; i < column; ++i)
     {
         return accumulate(*(matrix+1), k);
     }
 }
*/
int main()
{
    int matrix[3][4]{{1,2,3,5},{1,2,3,5},{1,2,3,6}};
     max_min_element_matrix(matrix, 3, 4);
    return 0;
}
