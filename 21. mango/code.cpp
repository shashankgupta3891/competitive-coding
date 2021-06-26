#include <bits/stdc++.h>
using namespace std;
 

// int binomial_coefficient(int n, int m)
// {
//     int res = 1;
 
//     if (m > n - m)
//         m = n - m;
 
//     for (int i = 0; i < m; ++i) {
//         res *= (n - i);
//         res /= (i + 1);
//     }
 
//     return res;
// }
 
int calculate_ways(int input1, int input2)
{
    // if (input1 < input2)
    //     return 0;
    

    int m=input2 - 1;
    int n=input2 + input1 - 1;

     int res = 1;
 
    if (m > n - m)
        m = n - m;
 
    for (int i = 0; i < m; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 

int main()
{
    int m = 1, n = 12;
 
    int result = calculate_ways(n, m);
    printf("%d\n", result);
 
    return 0;
}