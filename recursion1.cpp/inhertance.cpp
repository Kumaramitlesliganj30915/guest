#include <iostream>
using namespace std;
class human
{
public:
    int age;
    string name;
    int height;
    int weight;
    int setage(int d)
    {
        this->weight = d;
        cout << "this is our weight " << weight << endl;
    }


};
class Male : public human
{
public:
    string color;
    
    void sleep()
    {
        cout << "program is ready" << endl;
    }
};
int main()
{
    Male object1;
    cout << object1.age << endl;
    cout << object1.height << endl;
    object1.sleep();
    object1.setage(12);
}