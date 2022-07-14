#include <iostream>
#include <vector>
using namespace std;

float f(vector<float> x) {
    return(x[0] * x[0] * x[0] + 13.5 * x[0] * x[0] - 66 * x[0] + (5 * x[0] - x[1]) * (5 * x[0] - x[1]));
}

float f_delta(vector<float> x, float delta, int n) {
    x[n] = x[n] + delta;
    return f(x);
}

vector<float> sum(vector<float>x1, vector<float>x2, int n) {
    for (int i = 0; i < n; i++)
        x1[i] = x1[i] + x2[i];
    return x1;
}

vector<float> dif(vector<float>x1, vector<float>x2, int n) {
    for (int i = 0; i < n; i++)
        x1[i] = x1[i] - x2[i];
    return x1;
}

vector<float> mul(vector<float>x, float k, int n) {
    for (int i = 0; i < n; i++)
        x[i] = x[i] * k;
    return x;
}

void print(vector<float>x, int n) {
    for (int i = 0; i < n; i++)
        cout << 'x' << i + 1 << '=' << x[i] << endl;
}

int main()
{

    return 0;
}