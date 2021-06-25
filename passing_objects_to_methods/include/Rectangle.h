#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;


class Rectangle
{
    public:
        void print();
        Rectangle(int l, int w);
        Rectangle();
        Rectangle addRectangle(Rectangle r);
        virtual ~Rectangle();

    protected:

    private:
        int length;
        int widgh;
};

#endif // RECTANGLE_H
