

#include <iostream>
using namespace std;
//N1
template <typename T> int AB(T N[], T X) {
    int summ = 0;
    for (int i = 0; i < X; i++) {
        summ += N[i];
       
    }
    int result = summ / X;
    
    return result;
}
//N2 
template <typename X>int V(X A, X B) {
    return  -B / A;

}
template <typename N>void Y(N A, N B, N C) {
    int Desc = B * B - 4 * A * C;
    
    int resX1 = (-B - sqrt(Desc)) / (2 * A);
    int resX2 = (-B + sqrt(Desc)) / (2 * A);
    
    cout << resX1 << endl;
    cout << resX2 << endl;
}
//N3
double Func(double n, int r) {
    if (r < 0) {
        cout << "Impossible to round this number";
    }
    int res = (pow(10, r) * n);
    return res / pow(10, r);
}

int main()
{
    const int ar = 3;

    int arr[ar] = { 5, 17, 24 };
    
    cout << AB(arr, ar) << "\n";

    Y(2, 4, 1);
    cout << V(2, 2) << "\n";

    cout << Func(2.1311, 1) << "\n";
}


