#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   int j=0;
    setlocale(LC_ALL, "Russian");
    cout << "Эта программа демонстрирует печатные возможности языка C++.\n\n";
    string days[7] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
    do
        for (int i = 0; i < 7; i++) {
            j++;
                cout << days[i]<<"\t\t"<<j << endl;
            }
    while (j<364); 
    return 0;
}


