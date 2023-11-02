#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    float t;
    int n;
    
    cin >> t >> n;
    
    cout << setprecision(3) << std::fixed << t/n << endl;
    cout << n*2 << endl;
    
    return 0;
}