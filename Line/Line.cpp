#include "Line.hpp"

double_t Line::y(const double_t x) const {
    return (m * x + b);
}