#include "output_matrix.h"
#include <iostream>

int timofeev::check_diag(const int* matrix, size_t size)
{
<<<<<<< HEAD
  size_t sum_dig = strk + stl - 1;
  size_t sum_el = (strk * stl) + ((stl - 1) * stl);
  int* values = make_array(sum_el)
  size_t count = 0;
  for (size_t i = 0; i < (strk + stl - 1); i++)
  {
    size_t col = 0;
    int icur = i;
    int diag = 0;
    for (size_t j = (stl - 1); (col <= i) && (col < stl); j--)
=======
  const size_t move = size - 1;
  size_t diag = size;
  for (size_t i = 1; i < size; i++)
  {
    diag--;
    size_t left_in_diag = diag;
    size_t check_el = i;
    size_t fine_check = 0;
    while (left_in_diag > 0)
>>>>>>> timofeev.maxim/P3
    {
      if (matrix[check_el] == matrix[(check_el + (move * i))])
      {
<<<<<<< HEAD
        values[count] = matrix[(icur * stl + jcur)];
        count++;
=======
        check_el += size + 1;
        fine_check++;
>>>>>>> timofeev.maxim/P3
      }
      left_in_diag--;
    }
<<<<<<< HEAD
  }
  size_t mtr = 0;
  for (size_t i = 0; i < count; i++)
  {
    for (size_t j = 0; j < count && j != i; j++)
=======
    if (fine_check == diag)
>>>>>>> timofeev.maxim/P3
    {
      return 1;
    }
  }
  return 0;
}
