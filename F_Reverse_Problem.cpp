#include <bits/stdc++.h>
using namespace std;

int convert_N_Into_binary(int n)
{
    int r, m = 1, bin = 0;
    while (n != 0)
    {
        r = n % 2;
        bin = bin + (r * m);
        m = m * 10;
        n = n / 2;
    }
    return bin;
}
int Insert_One_IN_Last_of_N(int n){
    n=n+'1';
}
int main()
{
    int num1, num2;
    int N, M; // For Entering two numbers;
    cin >> N >> M;
    cout << convert_N_Into_binary(N);

    cout << endl;
    cout << convert_N_Into_binary(M);

    cout << endl;
    if (convert_N_Into_binary(N) == convert_N_Into_binary(M))
    {
        printf("Yes");
    }
    else{
        if(Insert_One_IN_Last_of_N(N)==convert_N_Into_binary(M)){
            printf("yes");
        }
    }
    return 0;
}