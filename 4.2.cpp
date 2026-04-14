#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point* move(int dx, int dy)
    {
        x = x + dx;
        y = y + dy;
        return this;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
void update(Point *p)
{
    p->x += 5;
    p->y += 5;
}

int main()
{
    Point p(2, 3);
    p.move(2, 3)->move(-1, 4);

    cout << "After move: ";
    p.display();

    update(&p);

    cout << "After update: ";
    p.display();

    return 0;
}
