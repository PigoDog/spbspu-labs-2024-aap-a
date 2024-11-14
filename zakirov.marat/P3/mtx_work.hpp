#ifndef MTX_WORK_HPP
#define MTX_WORK_HPP
#include <iostream>

namespace zakirov
{
  std::istream & input_mtx(std::istream & in, int * mtx, size_t columns, size_t rows);
  void mtx_spiral_decrease(int * mtx, size_t columns, size_t rows);
}

#endif
