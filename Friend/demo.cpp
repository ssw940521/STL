#include<iostream>
#include"time.h"
#include"stdlib.h"
using namespace std;

void ptintTime(time &t);

int main()
{
	time t(6, 34, 25);
	printTime(t);
	system("pause");
	return 0;
}

void printTime(time &t)
{
	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
}