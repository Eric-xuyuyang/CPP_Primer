#include<iostream>
#include<string>
#include"max.h"
using namespace std;

int main(){
    string name;
    cout << "输入:";
    cin >> name;
    cout << name;
    cout << max(11, 15) << endl;
    return 0;
}