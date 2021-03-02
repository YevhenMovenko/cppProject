#include <cstdio>
#include<cstddef>
#include<iostream>
using namespace std;
//int main()
//{
//	int gettysburg{};
//
//	int* gettysburg_address = &gettysburg;
//
//	printf("Value at gettysbrg_addres: %d \n", *gettysburg_address);
//	printf("Gettysburg Address: %p \n", gettysburg_address);
//
//	*gettysburg_address = 17325;
//
//	printf("Value at gettysbrg_addres: %d \n", *gettysburg_address);
//	printf("Gettysburg Address: %p \n", gettysburg_address);
//}

//struct ClockOfTheLongNow {
//	ClockOfTheLongNow() {
//	year = 2019;	
//	}
//	int year;
//	public:
//	void add_year() {
//		year++;
//	}
//	bool set_year(int new_year) {
//		if (new_year < 2019) return false;
//		year = new_year;
//		return true;
//	}
//	int get_year() {
//		return year;
//	}
//};
//
//int main(){
//
//	ClockOfTheLongNow clock;
//	ClockOfTheLongNow* clock_ptr = &clock;
//	clock_ptr->set_year(2020);
//
//	printf("Address of clock: %p \n", clock_ptr);
//	printf("Value of clock's year: %d \n", clock_ptr->get_year());
//	printf("Var2 Value of clock's year: %d \n", (*clock_ptr).get_year());
//
//};
//
//struct College {
//	char name[256];
//};
//
//void print_name(College* colleges, size_t n_colleges) {
//	for (size_t i = 0; i < n_colleges; i++) {
//		printf("%s Collage \n", colleges[i].name);
//	}
//}
//int main() {
//	College oxford[] = { "Magdalen", "Nuffield", "Kellog" };
//	print_name(oxford, sizeof(oxford)/sizeof(College));
//}

//int main() {
//	char lower[] = "abc?e";
//	char upper[] = "ABC?E";
//	char* upper_ptr = upper;
//	lower[3] = 'd';
//	upper_ptr[3] = 'D';
//
//	char letter_d = lower[3];
//	char letter_D = upper_ptr[3];
//
//	printf("Lower: %s\nupper: %s", lower, upper);
// }
int main() {
	char lower[] = "abc?e";
	char upper[] = "ABC?E";
	char* upper_ptr = &upper[0];
	*(lower+3) = 'd';
	*(upper_ptr +3) = 'D';

	char letter_d = *(lower + 4);
	char letter_D = *(upper_ptr + 4);

	printf("Lower: %s\nupper: %s", lower, upper);

}