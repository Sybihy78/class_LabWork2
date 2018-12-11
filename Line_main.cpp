#include <iostream>
#include "Line.h"


bool checkIntersection(Line line_1, Line line_2) {
	
	return line_1.getK() == line_2.getK() ? false : true;
}


Point findCommonPoint(Line line_1, Line line_2) {
	Point p_intersect;
	if (line_1.getK() != line_2.getK()) {
		p_intersect.x = (line_2.getB() - line_1.getB()) / (line_1.getK() - line_2.getK());
		p_intersect.y = (line_1.getK() * line_2.getB() - line_2.getK() * line_1.getB()) /
			(line_1.getK() - line_2.getK());
	}
	return p_intersect;
}


int main() {

	Point p1 = { 1, 2 };
	Point p2 = { 0, -3 };

	Line l1 = Line(p1, p2);

	float k1 = -5;
	float b1 = 4;

	Line l2 = Line(k1, b1);

	std::cout << "Line: " << "y = k * x + b" << std::endl;
	std::cout << std::endl;
	std::cout << "Line1: " << "y = " << l1.getK() << " * x + " << l1.getB() << std::endl;
	std::cout << "Line2: " << "y = " << l2.getK() << " * x + " << l2.getB() << std::endl;

	std::cout << std::endl;
	
	if (checkIntersection(l1, l2) == false && l1.getB() != l2.getB()) {
		std::cout << "Lines are parallel and don't intersect" << std::endl;
	}
	else if (checkIntersection(l1, l2) == false && l1.getB() == l2.getB()) {
		std::cout << "Lines are coincide" << std::endl;
	}
	else {
		std::cout << "Lines are intersect. Coordinates of intersection point: ";
		std::cout << "( " << findCommonPoint(l1, l2).x << "; " <<
			findCommonPoint(l1, l2).y << " )" << std::endl;
	}

	std::cout << "Line1 & point: ";
	l1.point_on_line({ 0,1 });
	l1.point_on_line(3, -5);
	l1.point_up_on_under_line({ -2, 4 });
	std::cout << "Line2 & point: ";
	l2.point_on_line({ 0,1 }); 
	l2.point_on_line(3, -5); 
	l2.point_up_on_under_line({ -2, 4 }); 
	
	std::cout << std::endl;
	std::cout << "Lines is created: " << Line::getAllLines() << std::endl;
	std::cout << "Now lines: " << Line::getNowLines() << std::endl;

	system("pause");
	return 0;
}