#include <cstdio>
#include<cstddef>



struct ClockOfTheLongNow {
	ClockOfTheLongNow() {
		if (!set
		{
			year = 2019;
		}
	}
	int year;
	public:
	void add_year(ClockOfTheLongNow& clock) {
		clock.set_year(clock.get_year()+1);
	}
	bool set_year(int new_year) {
		if (new_year < 2019) return false;
		year = new_year;
		return true;
	}
	int get_year() {
		return year;
	}
};
int main() {
	ClockOfTheLongNow clock;

}
