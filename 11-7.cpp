1. 构造函数对类的初始化：
    (1)同名（2）构造函数、其他函数在public声明，变量在private声明（3）替名xxx():...{}(4)输出函数，点输出（5）使用类 类名（——）

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


int main() {
    Box box1(12, 20, 25); // 创建第一个长方体对象
    Box box2(10, 14, 20); // 创建第二个长方体对象

    cout << "Box 1 volume: " << box1.volume() << endl; // 输出第一个长方体的体积
    cout << "Box 2 volume: " << box2.volume() << endl; // 输出第二个长方体的体积


    Student s1("John",18,"math");


    return 0;
}


2.对象数组的使用

class Box {
public:
    // 声明有默认参数的构造函数，用参数初始化表对象数据成员
    Box(int h=10, int w=12, int len=15) : height(h), width(w), length(len) {}

    // 声明计算体积的函数
    int volume();

private:
    int height;
    int width;
    int length;
};

// 在类外定义计算体积的函数
int Box::volume() {
    return height * width * length;
}

int main() {
    // 定义对象数组
    Box a[3] = {
        Box(10, 12, 15),  // 调用构造函数Box，提供第1个元素的实参
        Box(15, 18, 20), // 调用构造函数Box，提供第2个元素的实参
        Box(16, 20, 26)   // 调用构造函数，提供第3个元素的实参
    };

    // 输出对象数组中每个对象的体积
    cout << "volume of a[0] is " << a[0].volume() << endl; // 调用a[0]的volume函数
    cout << "volume of a[1] is " << a[1].volume() << endl; // 调用a[1]的volume函数
    cout << "volume of a[2] is " << a[2].volume() << endl; // 调用a[2]的volume函数

    return 0;
}

3.指针变量的使用

class Time {
public:
    int hour;
    int minute;
    int sec;
    void get_time();
};

void Time::get_time() {
    cout << hour << ":" << minute << ":" << sec << endl;
}

int main() {
    Time *pt; // 定义pt为指向Time类对象的指针变量
    Time t1; // 定义t1为Time类对象
    pt = &t1; // 将t1的起始地址赋给pt

    *pt.hour = 10; // 通过指针访问对象的hour成员
    pt->minute = 20;
    pt->sec = 30;

    (*pt).get_time(); // 调用对象的get_time函数
    pt->get_time(); // 调用对象的get_time函数

    return 0;
