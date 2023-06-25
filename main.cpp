#include <iostream>
#include <ctime>
using namespace std;

// Задание 1
//int main()
//{
//	srand(time(0));
//	setlocale(0, "RUS");

//    int list[5];
//	int Max;
//	int Min;

//	for (int i = 0; i < 5; i++)
//	{
//		list[i] = rand() % 99;
//		cout << list[i] << " ";
//	}
//	Min = list[0];
//	Max = list[0];

//	for (int i = 0; i < 5; i++)
//	{
//		if (list[i] > Max)
//		{
//			Max = list[i];
//		}
//		if (list[i] < Min)
//		{
//			Min = list[i];
//		}
//	}
//	cout << "\nМаксимум:" << Max << "\n";
//	cout << "Минимум:" << Min << "\n";
//}









// Задание 2
//int main()
//{
//	srand(time(0));
//	setlocale(0, "RUS");
	
//  int list[5];
//	int Max = 0;
//	int Min = 0;
//	int Number;
//	int sum = 0;

//	cout << "Введите начало диапазона:\n";
//	cin >> Min;
//	cout << "Введите конец диапазона:\n";
//	cin >> Max;
//	cout << "Введите цифру,которая принадлежит этому диапазону:\n";
//	while (Number <= Min || Number >= Max)
//	{
//		cin >> Number;
//	}

//	for (int i = 0; i < 5; i++)
//	{
//		list[i] = Min + rand() % (Max - Min);
//		cout << list[i] << " ";
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		if (list[i] < Number)
//		{
//			sum = sum + list[i];
//		}

//	}
// cout << "\nСумма чисел меньше числа " << Number << ": " << sum;
//}







// Задание 3
//int main()
//{
//   setlocale(0, "RUS");

//    int list[12];
//    int MinProfitMonth, MaxProfitMonth;
//    int count = 0;

//    for (int i = 0; i < 12; i++)
//    {
//        count++;
//        cout << "Введите прибыль за " << count << " месяц:\n";
//        cin >> list[i];
//    }

//    int Start_Month;
//    int End_Month;

//    cout << "Введите начальный и конечный диапазон поиска: \n";
//    cin >> Start_Month;
//    cin >> End_Month;

//    int Max_Profit = list[Start_Month - 1];
//    int Min_Profit = list[Start_Month - 1];
//    int Maxsimum = Start_Month;
//    int Minimum = Start_Month;

//    for (int i = Start_Month; i <= End_Month; i++)
//    {
//        if (list[i - 1] > Max_Profit)
//        {
//            Max_Profit = list[i - 1];
//            Maxsimum = i;
//        }

//        if (list[i - 1] < Min_Profit)
//        {
//            Min_Profit = list[i - 1];
//            Minimum = i;
//        }
//    }
//    cout << "Месяц с максимальной прибылью: " << Maxsimum << "\n";
//    cout << "Месяц с минимальной прибылью: " << Minimum << "\n";
//}







