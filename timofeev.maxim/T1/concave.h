#ifndef CONCAVE_H
#define CONCAVE_H
#include "Shape.h"
#include "base-types.h"
#include "shapes_tools.h"
#include <iostream>

namespace timofeev
{
  class Concave : public Shape
  {
  public:
    Concave(point_t p1, point_t p2, point_t p3, point_t p4);
    double get_area() const override;
    rectangle_t get_frame_rect() const override;
    void move(point_t new_pos) override;
    void move(double move_x, double move_y) override;
    void scale(double factor) override;

  private:
    point_t p1_;
    point_t p2_;
    point_t p3_;
    point_t p4_;
  };
}
#endif