#include <iostream>
#include <list>
using namespace std;


int new_int = 0;
int vibor = 0;


list<int> lst{3,4,14,64};
auto pos = lst.cbegin();



 void menu()
     {
     cout << endl << "Что желаете? \n 1)добавление эл-ов \n 2)удаление эл-ов \n 3)получение всех элементов \n 4)получение верхнего элемента\n 5)закрыть программу" << endl;
         cin >> vibor;
     }

 void v_1()
     {
         cout << endl << "Введите желаемое число:" << endl;
         cin >> new_int;

         lst.push_front(new_int);

         cout << "Элемент добавлен!" << endl;
     }

 void v_2()
     {
         lst.pop_front();
         cout << endl << "Элемент удалён." << endl;
     }
 void v_3()
     {
         cout << endl;

         for (auto i : lst) 
         {
             cout << i << ' ';
         }

         cout << endl;
     }
 void v_4()
     {
     int first{ lst.front() };
     cout << endl << first << endl;

     }





int main()
{
    setlocale(LC_ALL, "RUS");

    while (vibor != 5)
    {
        menu();
        if (vibor == 1)
            v_1();

        if (vibor == 2)
            v_2();

        if (vibor == 3)
            v_3();

        if (vibor == 4)
            v_4();
    }



    cout << endl;


}
