#include<iostream>
#include<string>
#include<string.h>
using namespace std;

struct Student{
    int number;
    char *name;
};

int main(){

    Student student1;
    student1.number = 1;
    strcpy(student1.name,"yusaku");
    cout << student1.number << endl;
    cout << student1.name << endl;
    return 0;
}