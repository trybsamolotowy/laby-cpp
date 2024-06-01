#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class matrix {

private:

    int rows;
    int columns;
    vector<vector<int>> data;

public:

    matrix(int a, int b) : rows(a), columns(b), data(a, vector<int>(b, 0)) {}

    matrix(const matrix& m) : rows(m.rows), columns(m.columns), data(m.data) {}


    ~matrix() {
        
        data.clear();
        cout << "Destruktor został wywolany." << endl;
    }

    friend matrix operator*(const matrix& macierz_1, const matrix& macierz_2) {
        if (macierz_1.columns != macierz_2.rows) {
            throw invalid_argument("Liczba kolumn pierwszej macierzy musi być równa liczbie wierszy drugiej macierzy.");
        }

        matrix result(macierz_1.rows, macierz_2.columns);

        for (int i = 0; i < macierz_1.rows; ++i) {
            for (int j = 0; j < macierz_2.columns; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < macierz_1.columns; ++k) {
                    result.data[i][j] += macierz_1.data[i][k] * macierz_2.data[k][j];
                }
            }
        }

        return result;
    }

    matrix operator+(const matrix& other) const {
        if (rows != other.rows || columns != other.columns) {
            throw invalid_argument("Wymiary macierzy muszą się zgadzać.");
        }

        matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    matrix operator-(const matrix& other) const {
        if (rows != other.rows || columns != other.columns) {
            throw invalid_argument("Wymiary macierzy muszą się zgadzać.");
        }

        matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return result;
    }

    matrix operator*(int skalar) const {
        matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] * skalar;
            }
        }

        return result;
    }

    matrix operator~() const {
        matrix result(columns, rows);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[j][i] = data[i][j];
            }
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    void set(int row, int col, int value) {
        if (row >= rows || col >= columns) {
            throw out_of_range("Indeks poza zakresem.");
        }
        data[row][col] = value;
    }
};

int main() {
    matrix A(2, 2);
    matrix B(2, 2);

    A.set(0, 0, 1);
    A.set(0, 1, 2);
    A.set(1, 0, 3);
    A.set(1, 1, 4);

    B.set(0, 0, 5);
    B.set(0, 1, 6);
    B.set(1, 0, 7);
    B.set(1, 1, 8);

    matrix C = A + B;
    matrix D = A - B;
    matrix E = A * B;
    matrix F = ~A;

    cout << "Macierz A:" << endl;
    A.display();

    cout << "Macierz B:" << endl;
    B.display();

    cout << "Macierz C (A + B):" << endl;
    C.display();

    cout << "Macierz D (A - B):" << endl;
    D.display();

    cout << "Macierz E (A * B):" << endl;
    E.display();

    cout << "Macierz F (~A):" << endl;
    F.display();

    return 0;
}
