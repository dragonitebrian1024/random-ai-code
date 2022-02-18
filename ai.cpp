#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <random>
#define WINVER 0x0500
#include <Windows.h>
#include "ai.h"
#include <iostream>

int main()
{
	return 0;
}

void AI::mainn()
{
	INPUT ip;
	srand(time(0));
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	std::cout << "please insert a number on how many times you want the ai to press buttons" << std::endl;
	std::cin >> how_many_times;

	while (x > how_many_times)
	{
		randomkey = rand() % 26 + 1;
		x++;
		Sleep(how_many_times);
	}
}