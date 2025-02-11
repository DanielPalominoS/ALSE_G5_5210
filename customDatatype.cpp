
#include <iostream>
struct Point {
    int x, y;
};

int main() {
    Point p1 = {10, 20};
    Point p2 ={-1,3};
    std::cout << "Point (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "Point 2 (" << p2.x << ", " << p2.y << ")\n";
    p2.x=-5;
    std::cout << "Point 2 (" << p2.x << ", " << p2.y << ")\n";
    return 0;
}
