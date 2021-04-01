#include <iostream>
using namespace std;
class Count{
    friend void setX(Count&, int);
public:
    int getX() const {return x;}
private:
    int x{0};
};
void setX(Count& c, int val){
    c.x = 10;
}
int main(){
    Count counter;
    cout << "counter.x after instantiation: " << counter.getX() <<endl;
    // after call getX()
    setX(counter, 100);
    cout << "counter.x after call to setX friend function:"
        << counter.getX() <<endl;
}