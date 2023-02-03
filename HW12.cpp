#include <iostream>
#include <string>
using namespace std;

bool isKPeriodic(const string& str, int K)
{

    for (int f = 0; f < str.length() - K; f++)
    {
        if (str[f] == str[f + K])
        {
            cout << "Кратно K" << endl;
            return true;
        }
    }
    cout << "Не кратно K!" << endl;
    return false;

}

int main()
{
    setlocale(0, "");
    string str = "123123123";
    int K = 3;
    isKPeriodic(str, K);
    return 0;
}