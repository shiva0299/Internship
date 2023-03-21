#include<iostream>
using namespace std;
class Rectangle
{
    private:
        double length;
        double breadth;

    public:
        void setDimensions(double l, double b)
            {
                length = l;
                breadth = b;
            }
        double area()
            {
                return length*breadth;
            }
        double perimeter()
            {
                return 2*(length + breadth);
            }
};
int main()
{
    Rectangle rect;
    rect.setDimensions(5,3);
    cout<<"Area of rectangle is "<<rect.area()<<endl;
    cout<<"Perimeter of rectangle is "<<rect.perimeter()<<endl;
    return 0;
}