// Lesson_in classroom_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

//int Nahod(int arr[], const int size, int k)
//{
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if (arr[i] + arr[j + 1]==k) {
//                cout << arr[i] << " " << arr[j + 1];
//                return 0;
//            }
//
//        }
//    }
//    cout << " Нет такой пары";
//    return 0;
//}
//int sort(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)    {
//        for (int j = size - 1; j > i; j--) {
//            if (arr[i] > arr[j])
//                swap(arr[i], arr[j]);
//        }   
//    }
//    return 0;
//}
//
//int poisk(int arr[], int size, int k)
//{
//    int s = 0; 
//    int j = size - 1; 
//    int sum = 0;
//    while (s < j)
//    {
//        sum = arr[s] + arr[j];
//        if (sum == k) {
//            cout << endl << arr[s] << " " << arr[j];
//            return 0;
//        }
//        if (sum < k)
//            s++;
//        else
//            j++;
//        cout << " No rezult";
//        return 0;
//    } 
//}

//int getAmount(int* ptr, int size)
//{
//    int sum = 0;
//    for (int i = 0; i < size; i++, ptr++) {
//        sum += *ptr;
//    }
//    return sum;
//}

void create(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand ();
    }
}
void sort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j))
                swap(*(arr + i), *(arr + j));
        }
    }
}
void view(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << '\t';
    }
}
void createC(int* a,int* b, int* c, int sizea, int sizeb, int sizec)
{
    for (int i = 0; i < sizea; i++) {
        *(c + i) = *(a + i);
    }
    for (int i = 0; i < sizeb; i++) {
        *(c + i + sizea) = *(b + i);
    }
}

//void zamena(int* arr, int size)
//{
//    for (int i = 0; i < size; i=i+2) {
//        swap(*(arr + i), *(arr + i + 1));
//    }
//}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    /*  int const size = 10;
      int arr[size];
       for (int i = 0; i < 10; i++) {
           arr[i] = rand () % (10 - (-10)) + (-10);
           cout << arr[i] << " ";
       }
      cout << endl;
      int k = 2;

      for (int i = 0; i < size; i++) {
          for (int j = 1; j < size; j++) {
              if (arr[i] + arr[j] == k)
                  cout << arr[i] << " " << arr[j];
              break;
          }
      }*/

      //int const size = 5;
      //int arr[size];
      //int k = 5;
      //for (int i = 0; i < 5; i++) {
      //    arr[i] = rand() % (10 - (-10)) + (-10);
      //    cout << arr[i] << " ";
      //}
      //cout << endl;
      ///*Nahod(arr,size,k);*/
      //sort(arr, size);
      //poisk(arr, size, k);

     /* Указатели*/

   /* int x = 10;
    int y = 5;
    int* py = &y;
    int* px = &x;*/
    /* cout << px << " " << endl << py;*/ // Показывает адрес памяти
    /*int a = 5;
     int y = 10;
     int* pa = &a;
     int* py = &y;
     cout << *pa << '\t' << *py << endl;

     cout << pa << '\t' << py << endl;*/

     /*int arr[5]{ 1,9,8,7,4 };
     int* pa = &arr[0];
     cout << *pa << endl;

     cout << *(pa + 1) << endl;*/ //Выводит значение следующей позиции массива
     /* const int size = 10;
      int arr[size];
      for (int i = 0; i < size; i++) {
          *(arr + i) = i;
          cout << *(arr + i) << '\t';
      }
      cout << endl << getAmount(arr, size);*/

    const int size = 10;
    int arr[size];
    /* create(arr, size);
     view(arr, size);
     zamena(arr, size);
     cout << endl;
     view(arr, size);
 }*/

    const int sizea = 5;
    const int sizeb = 10;

    int a[sizea];
    int b[sizeb];
    int const sizec = sizea + sizeb;
    int c[sizec];
    create(a, sizea);
    create(b, sizeb);
    createC(a, b, c, sizea, sizeb, sizec);
    sort(a, sizea);
    sort(b, sizeb);
    sort(c, sizec);

    view(a, sizea);
    cout << endl;
    view(b, sizeb);
    cout << endl << endl;
    view(c, sizec);

}
