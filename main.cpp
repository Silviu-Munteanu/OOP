#include <iostream>
using namespace std;
int F(int m, int n) { if (m > 0) { if (n == 0) return F(m-1,1); if (n > 0) return F(m-1, F(m, n-1)); } return n+1; }
int main()
{

    cout<<F(2,1);
    return 0;
}

