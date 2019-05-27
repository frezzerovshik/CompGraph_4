#include "defines_and_macroses.h"
#include "structures.h"
void line(int x0, int y0, int x1, int y1, COLORREF color)//Алгоритм Брезенхема
{
	int dx = abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
	int dy = abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
	int err = (dx > dy ? dx : -dy) / 2;
	int e2 = err;
	HWND sHwnd = GetForegroundWindow();
	HDC hdc = GetDC(sHwnd);
	for (;;)
	{
		SetPixel(hdc, x0, y0, color);
		if (x0 == x1 && y0 == y1) break;
		e2 = err;
		if (e2 > -dx)
		{
			err -= dy; x0 += sx;
		}
		if (e2 < dy)
		{
			err += dx; y0 += sy;
		}
	}
}
void convert_to_2d(Line a,Line c,Line e )
{
	a.start.x = a.start.x*(Z_C - Z_PL) / (Z_C - a.start.z);
	a.start.y = a.start.y*(Z_C - Z_PL) / (Z_C - a.start.z);
	a.start.z-=Z_PL;

	a.end.x = a.end.x*(Z_C - Z_PL) / (Z_C - a.end.z);
	a.end.y = a.end.y*(Z_C - Z_PL) / (Z_C - a.end.z);
	a.end.z -= Z_PL;

	c.end.x = c.end.x*(Z_C - Z_PL) / (Z_C - c.end.z);
	c.end.y = c.end.y*(Z_C - Z_PL) / (Z_C - c.end.z);
	c.end.z -= Z_PL;

	e.end.x = e.end.x*(Z_C - Z_PL) / (Z_C - e.end.z);
	e.end.y = e.end.y*(Z_C - Z_PL) / (Z_C - e.end.z);
	e.end.z -= Z_PL;
}
int main()
{
	COLORREF color_a = COLOR_1;
	COLORREF color_b = COLOR_2;
	COLORREF color_c = COLOR_3;
	COLORREF color_d = COLOR_4;
	COLORREF color_e = COLOR_5;
	COLORREF color_f = COLOR_6;
	Line a;//Ребро АВ
	Line b;//Ребро AС
	Line c;//Ребро BС
	Line d;//AD
	Line e;//DC
	Line f;//DB
	Line a_b;
	Line b_b;
	Line c_b;
	Line d_b;
	Line e_b;
	Line f_b;
	Point middle;
	char ch = 0;
	int i = 0;
	return 0;
}