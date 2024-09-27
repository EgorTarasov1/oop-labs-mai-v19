#include <iostream>
#include <string>

std::string number_to_foreign_language(int N) {
    if (N == 0) {
        return "sıfır";
    }

    int a = N / 10;
    int b = N % 10;
    std::string result;

    if (a == 1) {
        result += "on";
    } else if (a > 1 && a < 10) {
        if (a == 2) result += "yirmi";
        if (a == 3) result += "otuz";
        if (a == 4) result += "kırk";
        if (a == 5) result += "elli";
        if (a == 6) result += "altmış";
        if (a == 7) result += "yetmiş";
        if (a == 8) result += "seksen";
        if (a == 9) result += "doksan";
    }

    if (a != 0 && b != 0) {
        result += " ";
    }

    if (b != 0) {
        if (b == 1) result += "bir";
        if (b == 2) result += "iki";
        if (b == 3) result += "üç";
        if (b == 4) result += "dört";
        if (b == 5) result += "beş";
        if (b == 6) result += "altı";
        if (b == 7) result += "yedi";
        if (b == 8) result += "sekiz";
        if (b == 9) result += "dokuz";
    }

    if (N > 99 || N < 0) {
        return "Случай вне диапазона";
    }

    return result;
}

#ifdef L1_MAIN 
int main() {
    int N;
    std::cin >> N;
    std::cout << number_to_foreign_language(N);
    return 0;
}
#endif