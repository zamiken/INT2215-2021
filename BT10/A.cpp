#include <iostream>
#include <string>

using namespace std;

struct Point
{
	double x;
	double y;
};

void print1(Point my_point)
{
	cout << "(" << my_point.x << "," << my_point.y << ")";
}

void print2(Point *my_point)
{
	cout << "(" << my_point->x << "," << my_point->y << ")";
}

Point mid_point(const Point point1, const Point point2)
{
	Point neww;
	neww.x = (point1.x + point2.x) / 2;
	neww.y = (point1.y + point2.y) / 2;
	return neww;
}

int main()
{
	Point point;
	cout << &point << endl;
	cout << &(point.x) << endl;
	cout << &(point.y) << endl;
}

//note bai A4
//địa chỉ của x chính là địa chỉ của cấu trúc point
//địa chỉ của y là kế tiếp địa chỉ của x

// note bai A5
// khi sao chép struct có trường dữ liệu là một mảng
// thì struct sao chép sẽ có trường dữ liệu tương tự