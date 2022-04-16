#ifndef DATANTIME
#define DATANTIME
class DataAndTime {
private:
	int hours;
	int minutes;
	int seconds;
	int day;
	int month;
	int year;

public:
	DataAndTime(int hour, int minute, int second, int _day, int _month, int _year);
	~DataAndTime();
	DataAndTime(const DataAndTime& other);
	void Set_Time_h(int value_Hour);
	void Set_Time_m(int value_Minute);
	void Set_Time_s(int value_Second);

	int Get_Time_h() const;
	int Get_Time_m() const;
	int Get_Time_s() const;

	void Set_Data_D(int daY);
	void Set_Data_M(int monTH);
	void Set_Data_Y(int yeaR);

	int Get_Data_d();
	int Get_Data_m();
	int Get_Data_y();

	void Print()const;

	void Scan_time();
	void Scan_data();

	DataAndTime& operator = (const DataAndTime& other);
	DataAndTime& operator +(const DataAndTime& other);
	DataAndTime& operator -(const DataAndTime& other);
};
#endif