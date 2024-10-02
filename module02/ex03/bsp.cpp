#include "Point.hpp"

static float area (const Point ket1, const Point ket2, const Point ket3)
{
	float	area;

	area =	( (ket1.getX() * (ket2.getY() - ket3.getY()))
			+ (ket2.getX() * (ket3.getY() - ket1.getY()))
			+ (ket3.getX() * (ket1.getY() - ket2.getY()))
			) / 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float d0, d1, d2, d3;
	bool ret_val = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		ret_val = false;
	else if (d1 + d2 + d3 == d0)
		ret_val = true;

	return (ret_val);
}
