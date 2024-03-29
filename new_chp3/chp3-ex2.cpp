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
        cout << "������ ������ 4�� �̻� �־�� �մϴ�." << endl;
        return 1;
    }

    if (numbers.size() % 4 != 0)

    {   
        cout << "����������� ã�� ���ؼ��� ������ ������ 4�� ������� �մϴ�." << endl;

        return 1;
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < 3; i++)
    {
        int idx = numbers.size() / 4 * (i + 1) - 1;
        cout << i + 1 << "��° ����� �� : " << numbers[idx] << endl;
    }

    return 0;
}
