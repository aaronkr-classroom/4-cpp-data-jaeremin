#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(void)
{
    vector<int> numbers;
    int x;

    while (cin >> x)

    {
        numbers.push_back(x);
    }

    if (numbers.size() < 4)
    {
        cout << "정수의 개수가 4개 이상 있어야 합니다." << endl;
        return 1;
    }

    if (numbers.size() % 4 != 0)

    {   
        cout << "사분위수들을 찾기 위해서는 정수의 개수가 4의 배수여야 합니다." << endl;

        return 1;
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < 3; i++)
    {
        int idx = numbers.size() / 4 * (i + 1) - 1;
        cout << i + 1 << "번째 사분위 수 : " << numbers[idx] << endl;
    }

    return 0;
}
