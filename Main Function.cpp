#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <Windows.h>

//class Bookshelf {
//private:
//	int BookNumber;
//	int AmountOfBook;
//	double PriceOfBook;
//public:
//	void setBookNumber(void) {
//		cin >> BookNumber;
//	}
//	void setAmountOfBook(void) {
//		cin >> AmountOfBook;
//	}
//	void setPriceOfBook(void) {
//		cin >> PriceOfBook;
//	}
//	void getBookNumber(void) {
//		cout << BookNumber << endl;
//	}
//	void getAmountOfBook(void) {
//		cout << AmountOfBook << endl;
//	}
//	void getPriceOfBook(void) {
//		cout << PriceOfBook << endl;
//	}
//protected:
//	int BorrowDuration = 14;
//};
//int main(void){
//	Bookshelf book1;
//	Bookshelf book2;
//	book1.setBookNumber();
//	book1.getBookNumber();
//	const char* string = "helloworld";
//	cout << string << endl;
//	system("pause");
//	char hello[11] = "helloworld";
//	char* p = NULL;
//	char (&b)[11] = hello;
//	p = "helloworld";
//	cout << b;
//	system("pause");
//return 0;
//}
//Now I'll make a function of clock to show the time which is difined by usr;
//class clock {
//protected:
//	//�����޷������Σ�ͬʱ��ֱֹ�ӷ���
//	unsigned int minute = 0;
//	unsigned int hour = 0;
//	unsigned int second = 0;
//public:
//	//�����޸ĺ�������Ӵ�����ʾ
//	void setMinute(){
//		cin >> minute;
//		if (minute > 60) {
//			cout << "error,out of range!the range is \"0~60\"" << endl;
//			cin >> minute;
//		}
//	}
//	void setHour() {
//		cin >> hour;
//		if (hour > 24) {
//			cout << "error,out of range!the range is \"0~24\"" << endl;
//			cin >> hour;
//		}
//	}
//	void setSecond() {
//		cin >> second;
//		if (second > 60) {
//			cout << "error,out of range!the range is \"0~60\"" << endl;
//			cin >> second;
//		}
//	}
//public:
//	//���������ʾ��������ɵݽ�����
//	void Timego() {
//		//Form a judgement function and make a cycle
//		while (true)
//		{
//			//judge the range of time and ++
//			for (hour; ; hour++) {
//				if (hour == 60) 
//					hour = 0;
//				for (minute; ; minute++) {
//					if (minute == 60) {
//						minute = 0;
//						break;
//					}
//						for (second; ; second++) {
//							cout << hour << ":" << minute << ":" << second;
//							Sleep(1000);
//							system("cls");
//							if (second == 60) {
//								second = 0;
//								break;
//						}
//					}
//				}
//			}
//		}
//	}
//};
//int main(void) {
//	clock clock1;
//	clock1.setHour();
//	clock1.setMinute();
//	clock1.setSecond();
//	clock1.Timego();
//	system("pause");
//	return 0;
//}
//����ָ��
//void APP(int* a) {
//	(*a)++;
//}
//int main() {
	/*char a = 'a';
	int* p = (int*)&a;
	cout << p;*/
	//int a = 0;
	//APP(&a);
	//cout << a;

//	system("pause");
//	return 0;
//}
//���Ա��������ֱ�ӷ��������
//class Move {
//public:
//	int a, b;
//
//	void ppfuc() {
//		a++;
//		b++;
//	}
//};
//
//int main() {
//	Move momo1;
//	momo1.a = 1;
//	momo1.b = 2;
//	momo1.ppfuc();
//	cout << momo1.a << endl;
//	cout << momo1.b << endl;
//	system("pause");
//	return 0;
//}
//int main() {
//	int arr[10];
//	int maxnum;
//	int minnum;
//	int xiabiao1;
//	int xiabiao2;
//	int i = 0;
//	for (i = 0; i <= 9; i++) {
//		cin >> arr[i];
//	}
//	minnum = arr[0];
//	maxnum = arr[0];
//	for (int i = 0; i <= 9; i++)
//	{
//		if (maxnum <= arr[i]){
//			maxnum = arr[i];
//			xiabiao1 = i;
//	}
//		if (minnum >= arr[i]) {
//			minnum = arr[i];
//			xiabiao2 = i;
//		}
//	}
//	cout << "The max num is " << xiabiao1 << endl;
//	cout << "Then min num is " << xiabiao2 << endl;
//	system("pause");
//	return 0;
//}
//��������
//int main() {
//	int a[1] = { 0 };
//	cout << a[0] << endl;
//	system("pause");
//	return 0;
//}
//�������������˽�
//class Ball {
//public:
//	int R = 0;
//	void outp();
//	Ball();
//};
//void Ball::outp() {
//
//}
//Ball::Ball() {
//	cout << "��ʼ�����" << endl;
//}
//int main() {
//	Ball ball1;
//	system("pause");
//	return 0;
//}
//ǳѧstatic
//class model {
//public:
//	static int x, y;
//};
//int model::x;
//int model::y;
//int main() {
//	model X1;
//	model::x = 0;
//	return 0;
//}
class Box {
public:
	int lenth;
	int height;
	int width;
public:
	Box(void) {
		int lenth = 0;
		int height = 0;
		int width = 0;
		std::cout << "��ʼ�����" << std::endl;
	}
	void setWidth() {
		std::cin >> width;
	}
	void setLenth() {
		std::cin >> lenth;
	}
	void setHeight() {
		std::cin >> height;
	}

};
int main() {
	Box box1;
	Box* p = &box1;
	p->setHeight();
	std::cout << p->height << ' ' << std::endl;
	box1.setHeight();
	std::cout << p->height << ' ' << std::endl;
	system("pause");
	return 0;
}