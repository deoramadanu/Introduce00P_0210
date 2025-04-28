#include <iostream>
using namespace std;

class Planet{
    private:
    float gravity;
public:
string name;
float diameter;

void displaydata () {
    cout << "my gravity is" << gravity << endl;
}
void inputdata(){
    cout << "input nama : ";
    cin >> name;
    cout << "ukuranku : ";
    cin >> diameter;
    cout << "my gravity is :";
    cin >> gravity;
}
};
int main()
{
Planet venus ; 
venus.inputdata();
cout << "the name is " << venus.name << endl;
cout << "the diameter is " << venus.diameter << endl;

venus.displaydata();


}