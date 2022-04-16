
#include "datantime.h"
#include <iostream>


DataAndTime::DataAndTime(int hour, int minute, int second, int _day, int _month, int _year) {

	DataAndTime::hours = hour % 24;   
	DataAndTime::minutes = minute % 60;
	DataAndTime::seconds = second % 60;
	DataAndTime::month = _month % 12;
	DataAndTime::year = _year;
	DataAndTime::day = _day;
	switch (month) {
	case 1:
		day %= 31;
		break;
	case 2:
		day %= 28;
		break;
	case 3:
		day %= 31;
		break;
	case 4:
		day %= 30;
		break;
	case 5:
		day %= 31;
		break;
	case 6:
		day %= 30;
		break;
	case 7:
		day %= 31;
		break;
	case 8:
		day %= 31;
		break;
	case 9:
		day %= 30;
		break;
	case 10:
		day %= 31;
		break;
	case 11:
		day %= 30;
		break;
	case 12:
		day %= 31;
		break;
	}
	if (month == 2 && year / 4) {
		day %= 29;
	}

}

DataAndTime::DataAndTime(const DataAndTime& other) {
	this->hours = other.hours;
	this->minutes = other.minutes;
	this->seconds = other.seconds;
	this->day = other.day;
 	this->month = other.month;
	this->year = other.year;
}

DataAndTime::~DataAndTime() {

}

void DataAndTime::Set_Time_h(int value_Hour) {
	hours = value_Hour % 24;
}

void DataAndTime::Set_Time_m(int value_Minute) {
	minutes = value_Minute % 60;
}

void DataAndTime::Set_Time_s(int value_Second) {
	seconds = value_Second % 60;
}

int DataAndTime::Get_Time_h() const {
	return hours;
}
int DataAndTime::Get_Time_m() const {
	return minutes;
}
int DataAndTime::Get_Time_s()const {
	return seconds;
}

void DataAndTime::Set_Data_D(int daY) {

	switch (month) {
	case 1:
		day = daY % 31;
		break;
	case 2:
		day = daY % 28;
		break;
	case 3:
		day = daY % 31;
		break;
	case 4:
		day = daY % 30;
		break;
	case 5:
		day = daY % 31;
		break;
	case 6:
		day = daY % 30;
		break;
	case 7:
		day = daY % 31;
		break;
	case 8:
		day = daY % 31;
		break;
	case 9:
		day = daY % 30;
		break;
	case 10:
		day = daY % 31;
		break;
	case 11:
		day = daY % 30;
		break;
	case 12:
		day = daY % 31;
		break;
	}
	if (month == 2 && year / 4) {
		day = daY % 29;
	}

}

void DataAndTime::Set_Data_M(int monTH) {
	month = monTH % 12;
}

void DataAndTime::Set_Data_Y(int yeaR) {
	year = yeaR;
}

int  DataAndTime::Get_Data_d() {
	return day;
}

int DataAndTime::Get_Data_m() {
	return month;
}

int DataAndTime::Get_Data_y() {
	return year;
}

void DataAndTime::Print() const {

	std::cout << " Time is:  " << hours << ":" << minutes << ":" << seconds << " and data is:  " << day << "  " << month << "  " << year << std::endl;
}

void  DataAndTime::Scan_time() {
	int Sc_Hour;
	int Sc_Min;
	int Sc_Sec;
	std::cout << "Set time: ";std::cin >> Sc_Hour; std::cin >> Sc_Min; std::cin >> Sc_Sec;std::cout << std::endl;

	
	if (Sc_Hour < 0) {
		Sc_Hour = Sc_Hour * (-1);
		hours = Sc_Hour % 24;
	}
	else {
		hours = Sc_Hour % 24;
	}
	if (Sc_Min < 0) {
		Sc_Min = Sc_Min * (-1);
		minutes = Sc_Min % 60;
	}
	else {
		minutes = Sc_Min % 60;
	}
	if (Sc_Sec < 0) {
		Sc_Sec = Sc_Sec * (-1);
		seconds = Sc_Sec % 60;
	}
	else {
		seconds = Sc_Sec % 60;
	}
}

void DataAndTime::Scan_data() {

	int Sc_Day;
	int Sc_Month;
	int Sc_Year;
	std::cout << "Set data: "; std::cin >> Sc_Day; std::cout << "  "; std::cin >> Sc_Month; std::cout << "  "; std::cin >> Sc_Year;
	if (Sc_Year < 0) {
		Sc_Year = Sc_Year * (-1);
		year = Sc_Year % 2100;
	}
	else {
		year = Sc_Year % 2100;
	}
	if (Sc_Month < 0) {
		Sc_Month = Sc_Month * (-1);
		month = Sc_Month % 12;
	}
	else {
		month = Sc_Month % 12;
	}
	if (Sc_Day < 0) {
		Sc_Day = Sc_Day * (-1);
		switch (month) {
		case 1:
			day = Sc_Day % 31;
			break;
		case 2:
			day = Sc_Day % 28;
			break;
		case 3:
			day = Sc_Day % 31;
			break;
		case 4:
			day = Sc_Day % 30;
			break;
		case 5:
			day = Sc_Day % 31;
			break;
		case 6:
			day = Sc_Day % 30;
			break;
		case 7:
			day = Sc_Day % 31;
			break;
		case 8:
			day = Sc_Day % 31;
			break;
		case 9:
			day = Sc_Day % 30;
			break;
		case 10:
			day = Sc_Day % 31;
			break;
		case 11:
			day = Sc_Day % 30;
			break;
		case 12:
			day = Sc_Day % 31;
			break;
		}
		if (month == 2 && year / 4) {
			day = Sc_Day % 29;
		}
	}
	else {
		switch (month) {
		case 1:
			day = Sc_Day % 31;
			break;
		case 2:
			day = Sc_Day % 28;
			break;
		case 3:
			day = Sc_Day % 31;
			break;
		case 4:
			day = Sc_Day % 30;
			break;
		case 5:
			day = Sc_Day % 31;
			break;
		case 6:
			day = Sc_Day % 30;
			break;
		case 7:
			day = Sc_Day % 31;
			break;
		case 8:
			day = Sc_Day % 31;
			break;
		case 9:
			day = Sc_Day % 30;
			break;
		case 10:
			day = Sc_Day % 31;
			break;
		case 11:
			day = Sc_Day % 30;
			break;
		case 12:
			day = Sc_Day % 31;
			break;
		}
		if (month == 2 && year / 4) {
			day = Sc_Day % 29;
		}
	}
}
DataAndTime& DataAndTime:: operator = (const DataAndTime& other) {

	this->hours = other.hours;
	this->minutes = other.minutes;
	this->seconds = other.seconds;
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	
	return *this;
}


DataAndTime& DataAndTime::operator + (const DataAndTime& other) {
	long long  change_sum1 = 0;
	long long change_sum2 = 0;

	int mult_m = 0;
	int mult_y = 365;
	int flag = 0;

	int mult_M = 0;
	int mult_Y = 365;
	int flaG = 0;

	unsigned int mod_y = 0;

	int mult_m_arr1[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int mult_m_arr2[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (this->year >= other.year) {
		mod_y = (this->year) - (other.year);
	}
	else if (this->year < other.year) {
		mod_y = (other.year) - (this->year);
	}
	switch (this->month) {
	case 1:
		mult_m = 31;
		break;
	case 2:
		mult_m = 28;

		break;
	case 3:
		mult_m = 31;
		break;
	case 4:
		mult_m = 30;

		break;
	case 5:
		mult_m = 31;
		break;
	case 6:
		mult_m = 30;

		break;
	case 7:
		mult_m = 31;
		break;
	case 8:
		mult_m = 31;
		break;
	case 9:
		mult_m = 30;

		break;
	case 10:
		mult_m = 31;
		break;
	case 11:
		mult_m = 30;

		break;
	case 12:
		mult_m = 31;
		break;
	}
	if ((this->month == 2) && (this->year / 4)) {
		mult_m = 29;
		mult_y = 366;
		flag = 1;

		int mult_m_arr1[1] = { 29 };
	}




	int m_p = 1;
	if (this->year < 0) {
		m_p = -1;
	}
	long long months_sum1 = 0;
	int ii = 0;
	int k = 1;
	for (; k <= (this->month);k++) {
		months_sum1 += ((long long)(mult_m_arr1[ii])) * 86400;
		ii++;
	}

	change_sum1 = (long long)(this->seconds) + ((long long)(this->minutes) * 60) + ((long long)(this->hours) * 3600) + (((long long)(this->day)) * 86400) + (((long long)(months_sum1)+(((long long)(this->year) - 1970) * 86400 * (mult_y))));

	


	switch (other.month) {
	case 1:
		mult_M = 31;
		break;
	case 2:
		mult_M = 28;

		break;
	case 3:
		mult_M = 31;
		break;
	case 4:
		mult_M = 30;

		break;
	case 5:
		mult_M = 31;
		break;
	case 6:
		mult_M = 30;

		break;
	case 7:
		mult_M = 31;
		break;
	case 8:
		mult_M = 31;
		break;
	case 9:
		mult_M = 30;

		break;
	case 10:
		mult_M = 31;
		break;
	case 11:
		mult_M = 30;

		break;
	case 12:
		mult_M = 31;
		break;
	}
	if ((other.month == 2) && (other.year / 4)) {
		mult_M = 29;
		mult_Y = 366;
		flaG = 1;
		mult_m_arr2[1] = { 29 };
	}
	int M_P = 1;
	if (other.year < 0) {
		M_P = -1;
	}

	long long months_sum2 = 0;
	int ii2 = 0;
	int i = 1;
	for (; i <= (other.month);i++) {
		months_sum2 += ((long long)(mult_m_arr2[ii2])) * 86400;
		ii2++;
	}

	change_sum2 = (long long)other.seconds + (((long long)other.minutes) * 60) + (((long long)other.hours) * 3600) + (((long long)(other.day)) * 86400) + (((long long)(months_sum2)+(((long long)(other.year) - 1970) * (mult_Y) * 86400)));

	change_sum1 += change_sum2;

	if (change_sum1 < 0) {
		change_sum1 *= (-1);
	}
	int mult_both = (mult_m_arr1[i]) * (mult_m_arr2[k]);

	this->seconds = change_sum1 % 60;
	this->minutes = (change_sum1 / 60) % 60;
	this->hours = ((change_sum1 / 60) / 60) % 24;
	this->year = ((change_sum1 / 86400) / mult_y);
	this->month = ((((change_sum1) / mult_both) / 86400) % 12);
	this->day = (((change_sum1 / 60) / 60) / 24);

	switch (month) {
	case 1:
		day %= 31;
		break;
	case 2:
		day %= 28;
		break;
	case 3:
		day %= 31;
		break;
	case 4:
		day %= 30;
		break;
	case 5:
		day %= 31;
		break;
	case 6:
		day %= 30;
		break;
	case 7:
		day %= 31;
		break;
	case 8:
		day %= 31;
		break;
	case 9:
		day %= 30;
		break;
	case 10:
		day %= 31;
		break;
	case 11:
		day %= 30;
		break;
	case 12:
		day %= 31;
		break;
	}
	if (month == 2 && year / 4) {
		day %= 29;
	}


	return *this;

}


DataAndTime& DataAndTime::operator-(const DataAndTime& other) {
	long long  change_sum1 = 0;
	long long change_sum2 = 0;
	
	int mult_m = 0;
	int mult_y = 365;
	int flag = 0;
	
	int mult_M = 0;
	int mult_Y = 365;
	int flaG = 0;

	unsigned int mod_y = 0;
	
	int mult_m_arr1[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int mult_m_arr2[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	if (this->year >= other.year) {
		mod_y = (this->year) - (other.year);
	}
	else if (this->year < other.year) {  
		mod_y = (other.year) - (this->year);
	}
	switch (this->month) {
	case 1:
		mult_m = 31;
		break;
	case 2:
		mult_m = 28;
		
		break;
	case 3:
		mult_m = 31;
		break;
	case 4:
		mult_m = 30;
		
		break;
	case 5:
		mult_m = 31;
		break;
	case 6:
		mult_m = 30;
		
		break;
	case 7:
		mult_m = 31;
		break;
	case 8:
		mult_m = 31;
		break;
	case 9:
		mult_m = 30;
		
		break;
	case 10:
		mult_m = 31;
		break;
	case 11:
		mult_m = 30;
		
		break;
	case 12:
		mult_m = 31;
		break;
	}
	if ((this->month == 2) && (this->year / 4)) {
		mult_m = 29;
		mult_y = 366;
		flag = 1;

		int mult_m_arr1[1] = { 29 };
	}
	
	
	
	
	int m_p = 1;
	if (this->year < 0) {
		m_p = -1;
	}
	long long months_sum1 = 0;
	int ii = 0;
	int k = 1;
	for (; k <= (this->month);k++) {
		months_sum1 += ((long long)(mult_m_arr1[ii])) * 86400;
		ii++;
	 }

	change_sum1 = (long long)(this->seconds) + ((long long)(this->minutes) * 60) + ((long long)(this->hours) * 3600) + (((long long)(this->day))*86400) + (((long long)(months_sum1) + (((long long)(this->year) - 1970)*84600*(mult_y))));
	
	
	
	switch (other.month) {
	case 1:
		mult_M = 31;
		break;
	case 2:
		mult_M = 28;
		
		break;
	case 3:
		mult_M = 31;
		break;
	case 4:
		mult_M = 30;
		
		break;
	case 5:
		mult_M = 31;
		break;
	case 6:
		mult_M = 30;
		
		break;
	case 7:
		mult_M = 31;
		break;
	case 8:
		mult_M = 31;
		break;
	case 9:
		mult_M = 30;
		
		break;
	case 10:
		mult_M = 31;
		break;
	case 11:
		mult_M = 30;
		
		break;
	case 12:
		mult_M = 31;
		break;
	}
	if ((other.month == 2) && (other.year / 4)) {
		mult_M = 29;
		mult_Y = 366;
		flaG = 1;
		mult_m_arr2[1] = { 29 };
	}
	int M_P = 1;
	if (other.year < 0) {
		M_P = -1;
	}

	long long months_sum2 = 0;
	int ii2 = 0;
	int i = 1;
	for (; i <= (other.month);i++) {
		months_sum2 += ((long long)(mult_m_arr2[ii2])) * 86400;
		ii2++;
	}

	change_sum2 = (long long)other.seconds + (((long long)other.minutes) * 60) + (((long long)other.hours) * 3600) + (((long long)(other.day))*86400) + (((long long)(months_sum2) + (((long long)(other.year) - 1970)*(mult_Y)*86400)));
	
	change_sum1 -= change_sum2;

	if (change_sum1 < 0) {
		change_sum1 *= (-1);
	}
	  int mult_both = (mult_m_arr1[i]) * (mult_m_arr2[k]);

	this->seconds = change_sum1 % 60;
	this->minutes = (change_sum1 / 60)%60;
	this->hours = ((change_sum1/60)/60) % 24;
	this->year = ((change_sum1/86400)/mult_y); 
	this->month = ((((change_sum1)/mult_both)/86400) % 12);          
	this->day = (((change_sum1 /60)/60)/24);
	
	switch (month) {
	case 1:
		day %= 31;
		break;
	case 2:
		day %= 28;
		break;
	case 3:
		day %= 31;
		break;
	case 4:
		day %= 30;
		break;
	case 5:
		day %= 31;
		break;
	case 6:
		day %= 30;
		break;
	case 7:
		day %= 31;
		break;
	case 8:
		day %= 31;
		break;
	case 9:
		day %= 30;
		break;
	case 10:
		day %= 31;
		break;
	case 11:
		day %= 30;
		break;
	case 12:
		day %= 31;
		break;
	}
	if (month == 2 && year / 4) {
		day %= 29;
	}
	
	year+=1;
	return *this;

}