
#include <iostream>
#include <string>


using std::cin;	 // �Ǽ� ���� ���� ����
using std::cout;
using std::endl; 
using std::string;


int main() {
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Enter all words followed bt EOF: ";
	
	string max = "";
	string min = "";

	string word;
	while (cin >> word)
	{
		
			if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;
		
		//ũ�� Ȯ��
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}
	cout << "Max : " << max << endl
	<< "Min : " << min;
	
	return 0;
} // main ��