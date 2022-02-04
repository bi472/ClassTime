#pragma once
class Time
{
private:
	int m_hour, m_min, m_sec;
	char* m_time;

public:
	Time() {

	}

	Time(int hour) {
		m_hour = hour;
	}

	Time(int hour, int min) {
		m_hour = hour;
		m_min = min;
	}
	Time(int h, int m, int s) {
		m_hour = h;
		m_min = m;
		m_sec = s;
	}
	Time(char* time) {
		m_time = time;
	}
};

