
#include <cstdio>
#include<cstddef>
//
//double step_function(int x, double y) {
//	int resultX = 0;
//	if (x < 0) {
//		resultX = -1;
//	}
//	else	if (x > 0) {
//		resultX = 1;
//	}
//	double resultY = y * 0.1;
//	return resultX ;
//}
//void main() {
//	int  A, B, C;
//	double X, Y, Z, out1X, out2Y, out3Z;
//	int out1, out2, out3;
//
//	out1 = step_function(A = 20, X = .2);
//	out2 = step_function(B = -20, Y = 0.3);
//	out3 = step_function(C = 0, Z = .4);
//	printf(" out1 = %d\n out2 = %f\n out3 = %f\n", out1, out2, out3);
//
//	//return 0;
//}
//int main() {
//	unsigned short a = 0b10101010;
//	printf("%hu\b wewewe", a);
//	int b = 0123;
//	printf("%d\n", b);
//	unsigned long long d = 0xFFFFFFFFFFFFFFFF;
//	printf("%llu\f\n", d);
//	char as = 0.33;
//	std::size_t size_c = sizeof(as);
//	printf("chae: %zx\n", size_c);
//	char ch = 'A';
//	int arr[] = {1, 2, 3, ch};
//
//	printf("arr[] = %c\n ", arr[3]);
//
//}

//int main() {
//	unsigned long maximum = 0;
//	unsigned long value[] = { 10, 20, 30, 0, 0 };
//	//for (size_t i = 0; i < 5; i++) {
//	//	if (value[i] > maximum)maximum = value[i];
//	//}
//	//printf("Type maximum value is %lu", maximum);
//
//	for (unsigned long i : value) {
//		if (i > maximum)maximum = i;
//	}
//	printf("Type maximum value is %lu\n", maximum);
//
//	char alfabeta[27];
//	for (int i = 0; i < 26; i++) {
//		alfabeta[i] = i + 97;
//	}
//	alfabeta[26] = 0;
//	printf("%s\n ", alfabeta);
//
//	for (int i = 0; i < 26; i++) {
//		alfabeta[i] = i + 65;
//	}
//		printf("%s\n", alfabeta);
//	}

//enum class Race {
//	Dinan,
//	Teklan,
//	Ivyn,
//	Moiran,
//	Camite,
//	Julian,
//	Aidan
//};

//int main() {
//	Race race = Race::Moiran;
//	switch (race) {
//	   case Race::Dinan: {
//		    printf("You work hard!");
//        }break;
//	   case Race::Teklan: {
//		   printf("You are very stong!!");
//	   }break;
//	   case Race::Ivyn: {
//		   printf("You are great leader");
//	   }break;
//	   case Race::Moiran: {
//		   printf("My, how versatile you are!");
//	   }break;
//	   case Race::Camite: {
//		   printf("You're incredibly helpful ");
//	   }break;
//	   case Race::Julian: {
//		   printf("Anything you wont!");
//	   }break;
//	   default: {
//		   printf("Error: unkown racw!");
//	   }
//
//	}
//}

////struct Book
////{
////	char name[256];
////	int year;
////	int page;
////	bool hardcover;
////};
////
////union Variant
////{
////	char string[10];
////	int integer;
////	double float_point;
////};
////int main(){
////
////	Book neuromancer;
////	neuromancer.page = 271;
////	printf("Neuromancer has %d pages\n", neuromancer.page);
////
////
////}
////
////struct ClockOfTheLongNow {
////	ClockOfTheLongNow(int year_in) {
////		if (!set_year(year_in))
////		{
////			year = 2019;
////		}
////	}
////	int year;
////	public:
////	void add_year() {
////		year++;
////	}
////	bool set_year(int new_year) {
////		if (new_year < 2019) return false;
////		year = new_year;
////		return true;
////	}
////	int get_year() {
////		return year;
////	}
////};
////
////int main() {
////	ClockOfTheLongNow clock{2020};
////
////	printf("year: %d", clock.get_year());
////
////
////}
//
//struct PodSruct {
//	float a;
//	char b[256];
//	bool c;
//
//};
//int main() {
//	PodSruct init_pod1{};
//	PodSruct init_pod2 = {};
//	
//	PodSruct init_pod3{42, "Hellow World"}; 
//	PodSruct init_pod4{42, "Hellow World", true};
<<<<<<< HEAD
////}
//enum class Operation
//{
//	Add,
//	Subtract,
//	Multypy,
//	Devide
//};
//struct Calculator
//{
//	Calculator()
//	{
//		Operation oper = Operation::Add;
//	}
//	float calculate(int a, int b) {
//		Operation oper = Operation::Add;
//		switch (oper)
//		{
//		case Operation::Add: {
//			int c = a + b;
//			return c;
//		}break;
//
//		case Operation::Devide: {
//			float c = a / b;
//			return c;
//		}break;
//		case Operation::Multypy: {
//			float c = a * b;
//			return c;
//
//		}break;
//
//		case Operation::Subtract: {
//			float c = a - b;
//			return c;
//		}break;
//
//		};
//	}
//};
//
//float main() {
//	int a = 10, b = 5;
//	Calculator calc;
//	float c = calc.calculate(a, b);
//
//	printf("c = %f", c);
//}
=======
//}
////enum class Operation
////{
////	Add,
////	Subtract,
////	Multypy,
////	Devide
////};
////struct Calculator
////{
////	Calculator()
////	{
////		Operation operator;
////	}
////
////	int calculate(int a, int b) {
////		switch (operator)
////		{
////			case operator::Add{
////			}break;
////
////
////			default:
////				break;
////		}
////
////
////	}
////};
