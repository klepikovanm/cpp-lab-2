#include <iostream>
#include <cmath>
using namespace std;
//Функция для нахождения двойного факториала
long double factorial(long double n) {
    long double finish = 1;
    if (n==0) {
        return 1;
    } 
    for (long double i = n; i>0 ; i-=2) {
        finish = finish*i;
    }
    return finish;
}
//Функция для нахождения t(x)
long double t(long double x) {
    long double numerator=0;
    long double denominator=0;
    for (int k=0; k<11; k++) { 
        numerator += (pow(x,2*k+1))/factorial(2*k+1);
        denominator += (pow(x,2*k))/factorial(2*k); 
    }
    return numerator/denominator;
}
//Функция для итогового результата
long double result(long double y) {
    long double res = (7*t(0.25)+2*t(1+y))/(6-t(y*y-1));
    return res;
}
//Главная функция
int main() {
    long double y;
    cin >> y;
    cout << result(y);
    return 0;
}
