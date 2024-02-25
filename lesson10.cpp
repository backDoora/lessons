#include <iostream>

class Shape
{
public:
    virtual double getSquare() const = 0;     // площадь фигуры
    virtual double getPerimeter() const = 0;  // периметр фигуры
};


class Triangle : public Shape  // класс прямоугольника
{
public:
    Triangle(double w, double w1, double w2, double h) : width(w), width1(w1), wight2(w2), height(h)
    { }
    double getSquare() const override
    {

        return 3.14 * height2;
    }
    double getPerimeter() const override
    {

        return width + width1 + wight2;
    }
private:
    double width;
    double width1;
    double wight2;// ширина
    double height;  // высота
    double height2 = height * 2;
};




class Rectangle : public Shape  // класс прямоугольника
{
public:
    Rectangle(double w, double h) : width(w), height(h)
    { }
    double getSquare() const override
    {
        return width * height;
    }
    double getPerimeter() const override
    {
        return width * 2 + height * 2;
    }
private:
    double width;   // ширина
    double height;  // высота
};
class Circle : public Shape     // круг
{
public:
    Circle(double r) : radius(r)
    { }
    double getSquare() const override
    {
        return radius * radius * 3.14;
    }
    double getPerimeter() const override
    {
        return 2 * 3.14 * radius;
    }
private:
    double radius;  // радиус круга
};

int main()
{
    Rectangle rect{30, 50};
    Circle circle{30};
    Triangle triang{30, 30, 20, 25};

    std::cout << "Triangle square: " << triang.getSquare() << std::endl;
    std::cout << "Triangle perimeter: " << triang.getPerimeter() << std::endl;
    std::cout << "Rectangle square: " << rect.getSquare() << std::endl;
    std::cout << "Rectangle perimeter: " << rect.getPerimeter() << std::endl;
    std::cout << "Circle square: " << circle.getSquare() << std::endl;
    std::cout << "Circle perimeter: " << circle.getPerimeter() << std::endl;
}
