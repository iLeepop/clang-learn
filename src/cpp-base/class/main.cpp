#include <iostream>
using namespace std;

// 类
class Box
{
    public:
        double length;
        double breadth;
        double height;
        // 成员方法声明
        double volume();
};

// 成员方法实现
double Box::volume()
{
    return length * breadth * height;
}

// 基类
class Shape
{
    public:
        void setWidth(double w)
        {
            width = w;
        }
        void setHeight(double h)
        {
            height = h;
        }
    protected:
        double width;
        double height;
};

// 派生类
class Rectangle: public Shape
{
    public:
        double getArea()
        {
            return width * height;
        }
};

class PaintCost
{
    public:
        int getCost(double area)
        {
            return area * 70;
        }
};

// 多继承
class Rect: public Rectangle, public PaintCost
{
    public:
        double getTotalCost()
        {
            return getArea() * getCost(getArea());
        }
        Rect operator+(const Rect& r)
        {
            Rect rect;
            rect.width = this->width + r.width;
            rect.height = this->height + r.height;
            return rect;
        }
};