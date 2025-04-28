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

}