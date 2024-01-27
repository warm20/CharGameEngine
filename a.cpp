#include <iostream>
using namespace std;

class Father {
public:
    int x,y;
};

class Son : public Father {
public:
    int age;
};

int main(void) {
    Son s;
    s.x = 10;
    s.y = 10;
    Father *f = &s;
    s.age = 10;
    cout << f->x << " " << f->y << endl;
    s.x = 15;
    cout << f->x << " " << f->y << endl;
    cout << s.x << " " << s.y << endl;
}