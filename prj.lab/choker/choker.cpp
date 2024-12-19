#include <iostream>


class Choker {
	double** arr;
	int* cols;
	int rows;
public:
	Choker(int rows) : rows(rows) {
		arr = new double* [rows];
	}

	Choker() {
		Choker(1);
	}

	Choker(const Choker& src) {
		Choker created = Choker(src.rows);
		for (int i = 0; i < src.rows; ++i) {
			created[ro]
		}
	}

	Choker(Choker&& src) {

	}

	~Choker() {
		for (int i = 0; i < rows; ++i) {
			delete[] arr[i];
		}
		delete[] arr;
	};

	Choker& operator=(const Choker& src) {

	}

	Choker& operator=(Choker&& src);

	void SetRow(int index, int cols) {
		if (index < 0 || index > rows) {
			std::cout << "Index out of range";
			return;
		}
		arr[index] = new double[cols];
		this->cols[index] = cols;
	};
	void DelElem(int row, int col) {
		if (row < 0 || row > rows || col < 0 || col > cols[row]) {
			std::cout << "Index out of range";
			return;
		}
		delete arr[row][col];
	}

	void SetElem(int row, int col, double val) {
		if (row < 0 || row > rows || col < 0 || col > cols[row]) {
			std::cout << "Index out of range";
			return;
		}
		arr[row][col] = val;
	}

	double GetElem(int row, int col) {
		if (row < 0 || row > rows || col < 0 || col > cols[row]) {
			std::cout << "Index out of range";
			return 0;
		}
		return arr[row][col];
	}

	void ClearRow(int row) {

	}


};
