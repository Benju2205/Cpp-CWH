#include <iostream>
#include <cmath>
using namespace std;

// class number
// {
//     int a, b;

// public:
//     number(int, int);
//     void printData(void)
//     {
//         cout << "The value of a and b is: " << a << " and " << b << endl;
//     }
// };

// number::number(int x, int y)
// {
//     a = x;
//     b = y;
// }

// int main()
// {

//     number o1(1, 2); // Implicit call
//     o1.printData();

//     number o2 = number(3, 4); // Explicit call
//     o2.printData();

//     return 0;
// }




//      Program to calculate the distance between two points in a 2D graph
class graph
{
    int x, y;

public:

    friend graph calculateDistance(graph, graph);

    graph(int a, int b)
    {
        x = a;
        y = b;
    }
};

graph calculateDistance(graph o1, graph o2)
{

    int distance, ex, uai;
    // distance = sqrt(pow((p2.x)-(p1.x)) + pow((p2.y)-(p1.y)));
    ex = ((o2.x) - (o1.x)) * ((o2.x) - (o1.x));
    uai = ((o2.y) - (o1.y)) * ((o2.y) - (o1.y));
    distance = sqrt(ex + uai);
    cout << "The distance is: " << distance << endl;
}

int main()
{
    graph p1(2, 3);
    graph p2(6, 6);
    calculateDistance(p1, p2);
    return 0;
}