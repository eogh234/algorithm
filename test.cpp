#include <iostream>
#include <vector>
using namespace std;

bool is666(int n){
    string num = to_string(n);

    return num.find("666") != string::npos ? true : false;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, n;
    int cnt = 0;

    cin >> N;

    n = 666;
    while (cnt < N)
    {
        if(is666(n)){
            cnt++;
        }
        n++;
    }

    cout << n - 1 << '\n';
}
