#include <iostream>

using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n != 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    sum = digitSum(num);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
