#pragma once

struct Point {
	float x;
	float y;
};


class Line
{
	float k = 0;
	float b = 0;
	static int allLines;
	static int nowLines;
public:
	Line();
	explicit Line(const float, const float b = 0);
	Line(const Point, const Point);

	float getK() const;
	void setK(const float user_k);

	float getB() const;
	void setB(const float user_b);

	void point_on_line(const Point user_point);
	void point_on_line(const float user_x, const float user_y);
	void point_up_on_under_line(const Point user_point);

	static int getAllLines();
	static int getNowLines();

	virtual ~Line();
};

