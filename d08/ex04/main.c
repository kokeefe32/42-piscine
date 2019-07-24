#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 41;
}

int main()
{
	t_point	point;

	set_point(&point);
	printf("x: %d\n", point.x);
	return (0);
}
