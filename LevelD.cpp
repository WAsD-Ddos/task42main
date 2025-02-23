#include <iostream>
#include <string>


using namespace std;
#define N 5


bool find_zero_above_main_diagonal(int matrix[N][N]) {

    int flag=false;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (matrix[i][j] == 0) {
                flag = true;
                break;
            }
        }
    }

    return flag;
}


bool find_zero_below_main_diagonal(int matrix[N][N]) {
    int flag = false;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (matrix[i][j] == 0) {
                flag = true;
                break;
            }
        }
    }

    return flag;
}


bool find_zero_above_secondary_diagonal(int matrix[N][N]) {
    int flag = false;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1 - i; ++j) {
            if (matrix[i][j] == 0) {
                flag = true;
                break;
            }
        }
    }

    return flag;
}


bool find_zero_below_secondary_diagonal(int matrix[N][N]) {
    int flag = false;

    for (int i = 0; i < N; ++i) {
        for (int j = N - i; j < N; ++j) {
            if (matrix[i][j] == 0) {
                flag = true;
                break;
            }
        }
    }

    return flag;
}

int main() {
    int matrix[N][N]{

    };


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "zero_above_main_diagonal: " << (find_zero_above_main_diagonal(matrix)==1?"YES":"NO") << endl;
    cout << "zero_below_main_diagonal: " << (find_zero_below_main_diagonal(matrix) == 1 ? "YES" : "NO") << endl;
    cout << "zero_above_secondary_diagonal: " << (find_zero_above_secondary_diagonal(matrix) == 1 ? "YES" : "NO") << endl;
    cout << "zero_below_secondary_diagonal: " << (find_zero_below_secondary_diagonal(matrix) == 1 ? "YES" : "NO") << endl;

    return 0;
}