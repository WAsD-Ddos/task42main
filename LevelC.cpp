//#include <iostream>
//#include <string>
//
//
//using namespace std;
//#define N 5
//
//
//string find_positive_or_negative_above_main_diagonal(int matrix[N][N]) {
//
//    int pos = 0;
//    int neg = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = i + 1; j < N; ++j) {
//            if (matrix[i][j] <=0) {
//                neg++;
//            }
//            pos++;
//        }
//    }
//
//    return to_string(pos) + " " + to_string(neg);
//}
//
//
//string find_positive_or_negative_below_main_diagonal(int matrix[N][N]) {
//    int pos = 0;
//    int neg = 0;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if (matrix[i][j] <= 0) {
//                neg++;
//            }
//            pos++;
//        }
//    }
//
//    return to_string(pos) + " " + to_string(neg);
//}
//
//
//string find_positive_or_negative_above_secondary_diagonal(int matrix[N][N]) {
//    int pos = 0;
//    int neg = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N - 1 - i; ++j) {
//            if (matrix[i][j] <= 0) {
//                neg++;
//            }
//            pos++;
//        }
//    }
//
//    return to_string(pos) + " " + to_string(neg);
//}
//
//
//
//string find_positive_or_negative_below_secondary_diagonal(int matrix[N][N]) {
//    int pos = 0;
//    int neg = 0;
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = N - i; j < N; ++j) {
//            if (matrix[i][j] <= 0) {
//                neg++;
//            }
//            pos++;
//        }
//    }
//
//    return to_string(pos) + " " + to_string(neg);
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
//    cout << "positive_or_negative_above_main_diagonal: " << find_positive_or_negative_above_main_diagonal(matrix) << endl;
//    cout << "positive_or_negative_below_main_diagonal: " << find_positive_or_negative_below_main_diagonal(matrix) << endl;
//    cout << "positive_or_negative_above_secondary_diagonal: " << find_positive_or_negative_above_secondary_diagonal(matrix) << endl;
//    cout << "positive_or_negative_below_secondary_diagonal: " << find_positive_or_negative_below_secondary_diagonal(matrix) << endl;
//
//    return 0;
//}