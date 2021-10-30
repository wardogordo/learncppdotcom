//
// Created by wardh on 10/30/2021.
//

#ifndef INC_16_2_COMPOSITION_POINT2D_H
#define INC_16_2_COMPOSITION_POINT2D_H

class Point2D
{
private:
    int m_x;
    int m_y

public:
    // Default constructor
    Point2D()
            : m_x{ 0 }, m_y{ 0 }
    {
    }

    // Specific constructor
    Point2D(int x, int y)
            : m_x{ x }, m_y{ y }
    {
    }

    // Overloaded output operator
    friend std::ostream& operator<<(std::ostream& out, const Point2D& point)
    {
        out << '(' << point.m_x << ", " << point.m_y << ')';
        return out;
    }

    // Access function
    void setPoint(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
};
#endif //INC_16_2_COMPOSITION_POINT2D_H
