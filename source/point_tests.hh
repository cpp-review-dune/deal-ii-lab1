// #include <iostream>
#include <deal.II/base/point.h>
#include <gtest/gtest.h>

TEST(Pythagoras, Norm)
{
  dealii::Point<2> x(3, 4); // (x_1 = 3, x_2=4) en R^2.
  ASSERT_EQ(x.norm(), 5);
}

TEST(Pythagoras, Distance)
{
  dealii::Point<2> x(4, 5);
  dealii::Point<2> y(1, 1);
  ASSERT_EQ(x.distance(y), 5);
}

TEST(Pythagoras, ScalarProduct)
{
  dealii::Point<2> x(3, 4);
  ASSERT_EQ(x * x, 25);
}

TEST(Pythagoras, Norm_3D)
{
  dealii::Point<3> x(3, 4,
                     0); // (x_1 = 3, x_2=4, x_3=0) en R^3
  ASSERT_EQ(x.norm(), 5);
}

TEST(Pythagoras, Distance_3D)
{
  dealii::Point<3> x(4, 5, 2);
  dealii::Point<3> y(1, 1, -1);
  // std::cout << x.distance(y) << std::endl;
  ASSERT_EQ(x.distance(y), 5.8309518948453007);
}

TEST(Pythagoras, ScalarProduct_3D)
{
  dealii::Point<3> x(3, 4, 5);
  ASSERT_EQ(x * x, 50);
}