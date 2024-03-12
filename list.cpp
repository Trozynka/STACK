#include <iostream>
#include <list>
using namespace std;

int new_int = 0;
string choose = "0";

list<int> lst{3,4,14,64};
auto pos = lst.cbegin();

 void menu()
     {
     cout << endl << "Что желаете? \n 1)добавление эл-ов \n 2)удаление эл-ов \n 3)получение всех элементов \n 4)получение верхнего элемента\n 5)закрыть программу" << endl;
         cin >> choose;
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
         if (lst.empty())
             {
                cout << endl << "список пуст!" << endl;
             }
         else
         {
             lst.pop_front();
             cout << endl << "Элемент удалён." << endl;
         }
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

    while (choose != "5")
    {
        menu();

        if (choose == "1")
            v_1();

        if (choose == "2")
            v_2();

        if (choose == "3")
            v_3();

        if (choose == "4")
            v_4();

        if (choose == "5")
            return 0;

        if (choose != "1" && choose != "2" && choose != "3" && choose != "4" && choose != "5")
            cout << endl << "Неверный ввод!" << endl;
    }

    cout << endl;
}
