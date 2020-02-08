#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;


int main()
{
    int  withdrawal{};
    double balance{};
    cin >> withdrawal >> balance;

    constexpr double bank_fee{.50};
    double transaction{withdrawal + bank_fee};

    if (withdrawal % 5 != 0 or transaction > balance){

        cout << std::fixed << std::setprecision(2) <<  balance << '\n';
        return 0;
    }
    
    cout << std::fixed << std::setprecision(2) << balance - transaction << '\n';
    return 0;
}
