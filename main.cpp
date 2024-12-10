#include <iostream>
using namespace std;
int main()

{
    int arr[100], n, o;
    cin >> n;
    for (o=0; o < n; ++o)
    {
        cin >> arr[o];
    }
    int i, a, b;
    for (i = 1; i < n; i++) {
        a = arr[i];
        b = i - 1;
        while (b >= 0 && arr[b] > a) {
            arr[b + 1] = arr[b];
            b = b - 1;
        }
        arr[b + 1] = a;
    }
    for (o=0; o < n; ++o)
    {
        cout << arr[o] << ' ';
    }
    return 0;
}

