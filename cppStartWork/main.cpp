#include <cstdio>
#include<cstddef>

//#include <cstdio>
//#include<cstddef>
//#include<iostream>
//#include <iostream>     // std::cout
//#include <algorithm>    // std::all_of
//#include <array>        // std::array
//using namespace std;
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
//	//void add_year() {
//	//	year++;
//	//}
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
//int main() {
//	char lower[] = "abc?e";
//	char upper[] = "ABC?E";
//	char* upper_ptr = &upper[0];
//	*(lower+3) = 'd';
//	*(upper_ptr +3) = 'D';
//
//	char letter_d = *(lower + 4);
//	char letter_D = *(upper_ptr + 4);
//
//	printf("Lower: %s\nupper: %s", lower, upper);
//
//}
//struct ClockOfTheLongNow {
//	ClockOfTheLongNow() {
//		year = 2019;
//	}
//	int year;
//public:
//
//	bool set_year(int new_year) {
//		if (new_year < 2019) return false;
//		year = new_year;
//		return true;
//	}
//	int get_year() {
//		return year;
//	}
//};
//void add_year(ClockOfTheLongNow& clock) {
//	clock.set_year(clock.get_year() + 1);
//}
//int main() {
//	ClockOfTheLongNow clock;
//	printf("The year is %d.\n", clock.get_year());
//	add_year(clock);
//	printf("The year is %d.\n", clock.get_year());
//}
//struct Element {
//	Element* next{};
//	void insert_after(Element* new_element) {
//		new_element->next = next;
//		next = new_element;
//	}
//	char prefix[2];
//	short operating_number;
//};
//
//struct Element {
//	Element* next{};
//	void insert_after(Element* new_element) {
//		new_element->next = this->next;
//		this->next = new_element;
//	}
//	char prefix[2];
//
//	short operating_number;
//};
//
//int main(){
//	Element trooper1, trooper2, trooper3;
//	trooper1.prefix[0] = 'T';
//	trooper1.prefix[1] = 'K';
//	trooper1.operating_number = 421;
//	trooper1.insert_after(&trooper2);
//	
//	trooper2.prefix[0] = 'N';
//	trooper2.prefix[1] = 'F';
//    trooper2.operating_number = 2187;
//	trooper2.insert_after(&trooper3);
//	
//	trooper3.prefix[0] = 'L';
//	trooper3.prefix[1] = 'S';
//	trooper3.operating_number = 2187;
//
//
//	for (Element* cursor = &trooper1; cursor; cursor = cursor -> next) {
//		printf("stormtrops %c%c-%d\n",
//			cursor -> prefix[0],
//			cursor -> prefix[1],
//			cursor -> operating_number);
//	}
//}
// all_of example


//int main() {
//    array<int, 9> foo = { 3,5,7,4,13,17,19,23, 6 };
//
//    if (all_of(foo.begin(), foo.end(), [](int i){return i % 2; }))
//        cout << "All the elements are odd numbers.\n";
//    else {
//        cout << "Not all element is odd.\n";
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
	FILE* pFile;
	char buffer1[] =  "Hellow Yevhen";
	char buffer2[] = "Hellow again";
	pFile = fopen("myfile1.txt", "w");
	if (pFile == NULL) {
		fwrite(buffer1, sizeof(char), sizeof(buffer1), pFile);
	}
	else {
		fwrite(buffer2, sizeof(char), sizeof(buffer2), pFile);
	}
	fclose(pFile);

	return 0;
}
