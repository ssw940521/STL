#pragma once
#ifndef TIME_H
#define TIME_H

#include"match.h"
#include<iostream>
using namespace std;

class time
{
	friend void Match::print_time(time &t);
	friend void printTime(time &t);
public:

	time(int hour, int min, int sec);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif // !TIME_H

