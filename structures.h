#pragma once
typedef struct Point//Структура, описывающая точку
{
	double x;
	double y;
	double z;
}Point;
typedef struct Line//Структура, описывающая линию
{
	Point start;
	Point end;
}Line;