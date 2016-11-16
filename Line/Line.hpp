#ifndef HELLOGTEST_LINE_HPP
#define HELLOGTEST_LINE_HPP

#include <cmath>

class Line {
public:
    Line(double_t m_in, double_t b_in) : m(m_in), b(b_in) {};
    double_t y(const double_t x) const;

protected:
    double_t m;
    double_t b;
};


#endif //HELLOGTEST_LINE_HPP
