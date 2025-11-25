#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
    int n ; cin >> n ;
    int total_xor  = 0 ;
    for (int i = 0 ; i < n ; i++){
        int a ; cin >> a;
        total_xor = total_xor ^ a;
    }
    if (n % 2 == 0 || total_xor == 0){
        cout << "YES";
    }
    else cout << "NO" ;
}
