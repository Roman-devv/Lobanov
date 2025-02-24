#include <iostream>
#include <cmath>
using namespace std;

class Matrix {
protected:
	int** A;
	int** B;
	int na;
	int nb;
	int ma;
	int mb;
public:
	MatrixA() {
		int n, m;
		cin >> n >> m;
		na = n;
		ma = m;
		A = new int* [n]; // создание динмаческой матрицы
    		for (int i = 0; i < n; i++){
        		A[i] = new int[m];
    		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int c;
				cin >> c;
				A[i][j] = c;
			}
		}
        }
	MatrixB() {
                int n, m;
                cin >> n >> m;
		nb = n;
		mb = m;
                B = new int* [n]; // создание динмаческой матрицы
                for (int i = 0; i < n; i++){
                        B[i] = new int[m];
                }

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                int c;
                                cin >> c;
                                B[i][j] = c;
                        }
                }
        }
	~MatrixA() {
		for (int i = 0; i < na; i++) {
        		delete[] A[i];
    		}
    		delete[] A;
	}
	~MatrixB() {
                for (int i = 0; i < nb; i++) {
                        delete[] B[i];
                }
                delete[] B;
        }
	void SUMM() {
		if (na == nb && ma == mb) {
			for (int i = 0; i < na; i++) {
				for (int j = 0; j < ma; j++) {
					cout << A[i][j]+B[i][j] << " ";
				}
			cout << endl;
			}
			return;
		}
		cout << "Дурак! Проверь размерность, баран!" << endl;
		return;
	}
	void MIN() {
                if (na == nb && ma == mb) {
                        for (int i = 0; i < na; i++) {
                                for (int j = 0; j < ma; j++) {
                                        cout << A[i][j]-B[i][j] << " ";
                                }
                        cout << endl;
                        }
                        return;
                }
                cout << "Дурак! Проверь размерность, баран!" << endl;
                return;
        }
	void MULTI() {
                if (ma == nb) {
                        for (int i = 0; i < na; i++) {
                                for (int j = 0; j < mb; j++) {
                                        int s = 0;
					for (int k = 0; k < ma; k++) {
						s += A[i][k]*B[k][j];
					}
					cout << s << " ";
                                }
                        cout << endl;
                        }
                        return;
                }
                cout << "Дурак! Проверь размерность, баран!" << endl;
                return;
        }
	void transA() {
		for (int i = 0; i < na; i++) {
                                for (int j = 0; j < ma; j++) {
                                        cout << A[j][i] << " ";
                                }
				cout << endl;
                }
		return;
	}
	void transB() {
                for (int i = 0; i < nb; i++) {
                                for (int j = 0; j < mb; j++) {
                                        cout << B[j][i] << " ";
                                }
                                cout << endl;
                }
                return;
        }
};

int main() 
{
Matrix z;
z.StrA();
z.StrB();
cout << "!" << endl;
//z.transA();
//z.MULTI();
z.DestrA();
z.DestrB();
return 0;
}
