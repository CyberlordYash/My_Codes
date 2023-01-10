#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int bitwiseComplement(int n)
//     {
//         int bits = 0, count = 0, temp;

//         while (n)
//         {
//             temp = n % 2;
//             // if (temp == 1)
//             // {
//             //     temp = 1;
//             // }
//             // else
//             // {
//             //     temp = 0;
//             // }

//             bits = pow(10, count);

//             cout << bits << endl;
//             n = n / 2;
//             count++;
//         }
//         return bits;

//         count = 0;
//         int ans = 0;
//         while (bits)
//         {
//             temp = bits % 10;
//             ans = ans + temp * pow(2, count);
//             count++;
//             bits = bits / 10;
//         }
//         return ans;
//     }
// };t

int main()
{
    // Solution a;
    // int b = a.bitwiseComplement(12);
    // cout << b << endl;
    int count = 0;
    while (count != 5)
    {
        int b = pow(10, count);
        cout << b << endl;
        count++;
    }
}