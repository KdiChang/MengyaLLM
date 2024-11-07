#include <iostream>
using namespace std;

class Box {
public:
    Box(int h, int w, int len) : height(h), width(w), length(len) {} // 构造函数的初始化列表

    int volume() {
        return height * width * length; // 体积计算
    }

private:
    int height;
    int width;
    int length;
};

class Student{
    public:
        Student(string n,int i,string c):name(n),id(i),classes(c) {}

        int get_id(){
            return id;
        }

    private:
        string name;
        int id;
        string classes;
};

int main() {
    Box box1(12, 20, 25); // 创建第一个长方体对象
    Box box2(10, 14, 20); // 创建第二个长方体对象

    cout << "Box 1 volume: " << box1.volume() << endl; // 输出第一个长方体的体积
    cout << "Box 2 volume: " << box2.volume() << endl; // 输出第二个长方体的体积


    Student s1("John",18,"math");


    return 0;
}
