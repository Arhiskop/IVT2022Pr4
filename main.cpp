#include <iostream>
//#include <ctrap>
#include <iomanip>
#include <algorithm>
#include <Windows.h>
#include "Triangle_H.h"
#include "Pryamougl_H.h"
#include "Trapezia_h.h"
#include "Circle_H.h"
#include "Paralelogram_H.h"

using namespace std;

void menu();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, d, e, h;


    /*cout << "Введите а  b  c " << endl;
    cin >> a;
    cin >> b;
    cin >> c;*/


    int n = 0;

    while (n != 8)
    {
        menu();
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Введите а  b  c " << endl;
            cin >> a;
            cin >> b;
            cin >> c;

            TriangleLibrary::Triangle::estli(a, b, c);
            cout << "Площадь треугольника: " <<
                TriangleLibrary::Triangle::S(a, b, c) << endl;
            cout << "Периметр треугольника: " <<
                TriangleLibrary::Triangle::P(a, b, c) << endl;
            cout << "Углы треугольника: " << endl <<
                TriangleLibrary::Triangle::angleAB(a, b, c) << endl << TriangleLibrary::Triangle::angleBC(a, b, c) << endl << TriangleLibrary::Triangle::angleAC(a, b, c) << endl;
           
                break;
            
            case 2: cout << "Введите сторону а " << endl;
                cin >> a;
                cout << "Введите сторону b" << endl;
                cin >> b;
                cout << "Введите сторону c" << endl;
                cin >> c;
                cout << "Введите сторону d" << endl;
                cin >> d;
                
                PryamouglLibrary::Arithmetic::proof(a, b, c, d); 
                
                break;

            case 3: cout << "Введите сторону а " << endl;
                cin >> a;
                cout << "Введите сторону b" << endl;
                cin >> b;
                cout << "Введите сторону c" << endl;
                cin >> c;
                cout << "Введите сторону d" << endl;
                cin >> d;
                cout << "Введите среднию линию" << endl;
                cin >> e;

                trapLibrary::Trap::H(a, b, c, d, e);
                
                break;
                
            case 4: cout << "Введите радиус a " << endl;
                cin >> a;
                cout << "Периметр окружности равен = " << CircleLibrary::Circle::P(a) << endl;
                cout << "Площадь окружности равна = " << CircleLibrary::Circle::S(a) << endl;
               
                break;

            case 5: cout << "Введите стороны (в порядке a, b, c, d) и высоту (h) параллелограмма: " << endl;
                cin >> a >> b >> c >> d >> h;
                ParallelogramLibrary::Parallelogram::estli(a, b, c, d);
                cout << "Площадь параллелограмма равна: " << ParallelogramLibrary::Parallelogram::S(a, h) << endl;
                cout << "Периметр параллелограмма равен: " << ParallelogramLibrary::Parallelogram::P(a, b) << endl;
                cout << "Острый угол параллелограмма равен: " << ParallelogramLibrary::Parallelogram::os_angle(a, b, h) << endl;
                cout << "Тупой угол параллелограмма равен: " << 180 - ParallelogramLibrary::Parallelogram::os_angle(a, b, h) << endl;


                /*cout << " площадь трапеции = " <<
                    trapLibrary::Trap::S(a, b, c, d) << std::endl;
                cout << "периметр трапеции = " <<
                    trapLibrary::Trap::P(a, b, c, d) << std::endl;
                cout << "угол AD = " <<
                    trapLibrary::Trap::angleAD(a, b, c, d) << std::endl;
                cout << "угол DC = " <<
                    trapLibrary::Trap::angleDC(a, b, c, d) << std::endl;
                cout << "угол CB = " <<
                    trapLibrary::Trap::angleCB(a, b, c, d) << std::endl;
                cout << "угол BA = " <<
                    trapLibrary::Trap::angleBA(a, b, c, d) << std::endl; */ break;
           // case 4: nomer(List); break;
           // case 5: dlina(List); break;
            //case 6: sred(List); break;
           // case 7: del(List); break;
           // case 8: break;
        default: cout << "Такого варианта нет" << endl;
        }
    }


    /*cout << " " <<
          trapLibrary::Arithmetic::estli(a, b,c) << std::endl;
    cout << "Площадь треугольника: " <<
          trapLibrary::Arithmetic::S(a, b, c) << std::endl;
     cout << "Периметр треугольника: " <<
          trapLibrary::Arithmetic::P(a, b,c) << std::endl;
      cout << "Углы треугольника: " <<
          trapLibrary::Arithmetic::angle(a, b,c) << std::endl;

          void hline() {
              const int m = 119;
              for (int i = 0; i < m; i++)
                  cout << "-";
              cout << endl;
          }*/
    return 0;
}
void menu()
{
    cout << endl << "      МЕНЮ     " << endl;
    cout << "1. Треугольник" << endl;
    cout << "2. Прямоугольник" << endl;
    cout << "3. Трапеция" << endl;
    cout << "4. Окружность " << endl;
    cout << "5. Параллелограмм " << endl;
    
}
