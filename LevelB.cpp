//#include <iostream>
//#include <string>
//
//
//using namespace std;
//#define N 5
//
//
//string find_odd_or_oven_above_main_diagonal(int matrix[N][N]) {
//
//    int odd = 0;
//    int even = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = i + 1; j < N; ++j) {
//            if (matrix[i][j] %2==0) {
//                odd++;
//            }
//            even++;
//        }
//    }
//
//    return to_string(odd)+" "+to_string(even);
//}
//
//
//string find_odd_or_oven_below_main_diagonal(int matrix[N][N]) {
//    int odd = 0;
//    int even = 0;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if (matrix[i][j] % 2 == 0) {
//                odd++;
//            }
//            even++;
//        }
//    }
//
//    return to_string(odd) + " " + to_string(even);
//}
//
//
//string find_odd_or_oven_above_secondary_diagonal(int matrix[N][N]) {
//    int odd = 0;
//    int even = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N - 1 - i; ++j) {
//            if (matrix[i][j] % 2 == 0) {
//                odd++;
//            }
//            even++;
//        }
//    }
//
//    return to_string(odd) + " " + to_string(even);
//}
//
//
//Функция для поиска максимального элемента ниже побочной диагонали
//string find_odd_or_oven_below_secondary_diagonal(int matrix[N][N]) {
//    int odd = 0;
//    int even = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = N - i; j < N; ++j) {
//            if (matrix[i][j] % 2 == 0) {
//                odd++;
//            }
//            even++;
//        }
//    }
//
//    return to_string(odd) + " " + to_string(even);
//}
//
//int main() {
//    int matrix[N][N]{
//
//    };
//
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    cout << "odd_or_oven_above_main_diagonal: " << find_odd_or_oven_above_main_diagonal(matrix) << endl;
//    cout << "odd_or_oven_below_main_diagonal: " << find_odd_or_oven_below_main_diagonal(matrix) << endl;
//    cout << "odd_or_oven_above_secondary_diagonal: " << find_odd_or_oven_above_secondary_diagonal(matrix) << endl;
//    cout << "odd_or_oven_below_secondary_diagonal: " << find_odd_or_oven_below_secondary_diagonal(matrix) << endl;
//
//    return 0;
//}
