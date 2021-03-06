#include <vector>

double get_matrix_element(const double* array, int i, int j, int lda)
{
    return array[i+j*lda];
}

int main()
{
    int m = 10;
    int n = 10000;
    std::vector<double> matrix(m*n);
    get_matrix_element(matrix.data(), 9, 9934, n);
}
