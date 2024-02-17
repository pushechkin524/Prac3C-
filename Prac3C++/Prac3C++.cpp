#include <iostream>
#include <iomanip>

const int row = 3;
const int column = 5;


void inputMatrix(float matrix[row][column]) {
    std::cout << "Введите элементы матрицы " << row << "x" << column << ":\n";
    for (int i = 0; i < row; ++i) {
        std::cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < column; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}


void computeRowAverages(const float matrix[row][column], float averages[]) {
    for (int i = 0; i < row; ++i) {
        float sum = 0;
        for (int j = 0; j < column; ++j) {
            sum += matrix[i][j];
        }
        averages[i] = sum / column;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    float matrix[row][column];
    float rowAverages[row];

    inputMatrix(matrix);
    computeRowAverages(matrix, rowAverages);

    std::cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < row; ++i) {
        std::cout << "Строка " << i + 1 << ": " << rowAverages[i] << std::endl;
    }

    return 0;
}
