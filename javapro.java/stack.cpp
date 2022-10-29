#include<iostream>
using namespace std;
template<typename t>
class Pair{
    t x;
    t y;
    public:
    void setX(int x){
        this->x=x;

    }
    void setY(int y){
        this->y=y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
int main(){
      Pair<int> p1;
      p1.setX(10);
      p1.setY(20);
      cout<<p1.getX()<<" "<<p1.getY()<<endl;

}