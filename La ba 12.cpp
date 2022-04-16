#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <time.h>
#include "datantime.h"



int main() {

	int time_H = 0;
	int Day;
	int Month;
	int Year;

	int Hours = (int)time(NULL) % 24;
	int Minutes = (int)time(NULL) % 60;
	int Seconds = (int)time(NULL) % 60;

	time_t rawtime;
	struct tm* ptm;
	time(&rawtime);

	ptm = gmtime(&rawtime);

	Day = ptm->tm_wday;
	Month = ptm->tm_mon;
	Year = ptm->tm_year;

	DataAndTime eleven(Hours, Minutes, Seconds, Day, Month, Year);

	eleven.Get_Data_y();
	time_H = eleven.Get_Time_h();
	time_H = time_H;
	eleven.Print();
	DataAndTime twelf(eleven);

	twelf.Print();

	eleven.Scan_time();
	eleven.Scan_data();

	int Daay, Moonth, Yeaar;
	Daay = 9;
	Moonth = 7;
	Yeaar = 2018;

	twelf.Set_Time_h(22);
	twelf.Set_Time_m(41);
	twelf.Set_Time_s(11);
	twelf.Set_Data_Y(Yeaar);
	twelf.Set_Data_M(Moonth);
	twelf.Set_Data_D(Daay);

	DataAndTime twenty(Hours, Minutes, Seconds, Day, Month, Year);
	twenty = twelf;

	eleven.Print();
	printf("\n\n\n");
	twenty.Print();

	DataAndTime ten(Hours, Minutes, Seconds, Day, Month, Year);
	ten.Set_Data_Y(2019);
	ten.Set_Data_M(5);
	ten.Set_Data_D(19);
	ten.Set_Time_h(13);
	ten.Set_Time_m(12);
	ten.Set_Time_s(51);

	printf("\n");
	ten.Print();
	printf("\n");
	Hours = 7;
	Minutes = 32;
	Seconds = 56;
	Day = 67;
	Month = 5;
	Year = 2000;
	DataAndTime one(Hours, Minutes, Seconds, Day, Month, Year);
	one.Print();

	
	ten.Print();
	
	ten-one;
	ten.Print();  

	
	return 0;
}