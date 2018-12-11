#include "Line.h"
#include <iostream>

int Line::allLines = 0;
int Line::nowLines = 0;

Line::Line()
{
	++allLines;
	++nowLines;
}

Line::Line(float user_k, float user_b) :
	k(user_k),
	b(user_b)
{
	++allLines;
	++nowLines;
}

Line::Line(Point p1, Point p2) {
	k = (p1.y - p2.y) / (p1.x - p2.x);
	b = p1.y - k * p1.x;
	++allLines;
	++nowLines;
}

Line::~Line()
{
	--nowLines;
}

float Line::getK() const {
	return k;
}

void Line::setK(const float user_k) {
	this->k = user_k;
}

float Line::getB() const {
	return b;
}

void Line::setB(const float user_b) {
	this->b = user_b;
}

void Line::point_on_line(const Point user_point) {
	if ((user_point.y - k * user_point.x - b) == 0) {
		std::cout << "Point is on line" << std::endl;
	}
	else {
		std::cout << "Point isn't on line" << std::endl;
	}
}

void Line::point_on_line(const float user_x, const float user_y) {
	if ((user_y - k * user_x - b) == 0) {
		std::cout << "Point is on line" << std::endl;
	}
	else {
		std::cout << "Point isn't on line" << std::endl;
	}
}

void Line::point_up_on_under_line(const Point user_point) {
	if (user_point.y > (k * user_point.x + b)) {
		std::cout << " 1 - point is up line" << std::endl;
	}
	else if (user_point.y == (k * user_point.x + b)) {
		std::cout << " 0 - point is on line" << std::endl;
	}
	else {
		std::cout << "-1 - point is under line" << std::endl;
	}
}

int Line::getAllLines() {
	return allLines;
}

int Line::getNowLines() {
	return nowLines;
}

