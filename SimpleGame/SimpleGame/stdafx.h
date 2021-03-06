#pragma once
#pragma comment(lib, "winmm.lib") 

#define CHARACTER_HP 100
#define CHARACTER_SIZE 50
#define CHARACTER_SPEED 100
#define CHARACTER_ANIMATION_COUNT 8

#define BUILDING_HP 500
#define BUILDING_SPEED 600
#define BUILDING_SIZE 100

#define BULLET_HP 15
#define BULLET_SPEED 200
#define BULLET_SIZE 4

#define ARROW_HP 10
#define ARROW_SPEED 100
#define ARROW_SIZE 4

#ifndef NOMINMAX

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#endif  /* NOMINMAX */

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include "Sound.h"

using namespace std;

