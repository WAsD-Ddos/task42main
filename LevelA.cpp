//#include <iostream>
//#include <string>
//
//
//using namespace std;
//#define N 5
//
////Функция для поиска максимального элемента выше главной диагонали
//int find_max_above_main_diagonal(int matrix[N][N]) {
//    
//    int maxVal = matrix[0][0];
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = i + 1; j < N; ++j) {
//            if (matrix[i][j] > maxVal) {
//                maxVal = matrix[i][j];
//            }
//        }
//    }
//
//    return maxVal;
//}
//
//// Функция для поиска максимального элемента ниже главной диагонали
//int find_max_below_main_diagonal(int matrix[N][N]){
//    int maxVal = matrix[0][0];
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if (matrix[i][j] > maxVal) {
//                maxVal = matrix[i][j];
//            }
//        }
//    }
//
//    return maxVal;
//}
//
////Функция для поиска максимального элемента выше побочной диагонали
//int find_max_above_secondary_diagonal(int matrix[N][N]) {
//    int maxVal = matrix[0][0]; 
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N - 1 - i; ++j) {
//            if (matrix[i][j] > maxVal) {
//                maxVal = matrix[i][j];
//            }
//        }
//    }
//
//    return maxVal;
//}
//
////Функция для поиска максимального элемента ниже побочной диагонали
//int find_max_below_secondary_diagonal(int matrix[N][N]) {
//    int maxVal = matrix[0][0]; 
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = N - i; j < N; ++j) {
//            if (matrix[i][j] > maxVal) {
//                maxVal = matrix[i][j];
//            }
//        }
//    }
//
//    return maxVal;
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
//    cout << "max_above_main_diagonal: " << find_max_above_main_diagonal(matrix) << endl;
//    cout << "max_below_main_diagonal: " << find_max_below_main_diagonal(matrix) << endl;
//    cout << "max_above_secondary_diagonal: " << find_max_above_secondary_diagonal(matrix) << endl;
//    cout << "max_below_secondary_diagonal: " << find_max_below_secondary_diagonal(matrix) << endl;
//
//    return 0;
//}

