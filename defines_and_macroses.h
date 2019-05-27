#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define DELTA 70
#define UPSCALE 1.01
#define DOWNSCALE 0.25
#define COLOR_1 RGB(255,0,0)//Red
#define COLOR_2 RGB(0,255,0)//Green
#define COLOR_3 RGB(0,0,255)//Blue
#define COLOR_4 RGB(255,255,0)//Yellow
#define COLOR_5 RGB(255, 0, 255)//Purple
#define COLOR_6 RGB(252, 86, 147)//Pink
#define Z_PL -50
#define Z_C -500
//Макросы
#define MIDDLE middle.x = (a.start.x + a.end.x + c.end.x+e.end.x) / 4;middle.y = (a.start.y + a.end.y + c.end.y+e.end.y) / 4;middle.z = (a.start.z + a.end.z + c.end.z+e.end.z) / 4; //Центр масс тетраэдра
/*Перемещение фигуры в начало координат*/
#define MOVE_ZERO_A a.start.x -= middle.x;a.start.y -= middle.y;a.start.z-=middle.z;a.end.x -= middle.x;a.end.y -= middle.y;a.end.z-=middle.z;
#define MOVE_ZERO_B b.start.x -= middle.x;b.start.y -= middle.y;b.start.z-=middle.z;b.end.x -= middle.x;b.end.y -= middle.y;b.end.z-=middle.z;
#define MOVE_ZERO_C c.start.x -= middle.x;c.start.y -= middle.y;c.start.z-=middle.z;c.end.x -= middle.x;c.end.y -= middle.y;c.end.z-=middle.z;
#define MOVE_ZERO_D d.start.x -= middle.x;d.start.y -= middle.y;d.start.z-=middle.z;d.end.x -= middle.x;d.end.y -= middle.y;d.end.z-=middle.z;
#define MOVE_ZERO_E e.start.x -= middle.x;e.start.y -= middle.y;e.start.z-=middle.z;e.end.x -= middle.x;e.end.y -= middle.y;e.end.z-=middle.z;
#define MOVE_ZERO_F f.start.x -= middle.x;f.start.y -= middle.y;f.start.z-=middle.z;f.end.x -= middle.x;f.end.y -= middle.y;f.end.z-=middle.z;
/*Перемещение фигуры в исходную позицию*/
#define MOVE_BACK_A a.start.x -= middle.x;a.start.y -= middle.y;a.start.z-=middle.z;a.end.x -= middle.x;a.end.y -= middle.y;a.end.z-=middle.z;
#define MOVE_BACK_B b.start.x -= middle.x;b.start.y -= middle.y;b.start.z-=middle.z;b.end.x -= middle.x;b.end.y -= middle.y;b.end.z-=middle.z;
#define MOVE_BACK_C c.start.x -= middle.x;c.start.y -= middle.y;c.start.z-=middle.z;c.end.x -= middle.x;c.end.y -= middle.y;c.end.z-=middle.z;
#define MOVE_BACK_D d.start.x -= middle.x;d.start.y -= middle.y;d.start.z-=middle.z;d.end.x -= middle.x;d.end.y -= middle.y;d.end.z-=middle.z;
#define MOVE_BACK_E e.start.x -= middle.x;e.start.y -= middle.y;e.start.z-=middle.z;e.end.x -= middle.x;e.end.y -= middle.y;e.end.z-=middle.z;
#define MOVE_BACK_F f.start.x -= middle.x;f.start.y -= middle.y;f.start.z-=middle.z;f.end.x -= middle.x;f.end.y -= middle.y;f.end.z-=middle.z;
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>