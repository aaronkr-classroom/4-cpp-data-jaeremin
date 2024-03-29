
#include <iostream>
#include <string>


using std::cin;	 // 실수 숫자 길이 정의
using std::cout;
using std::endl; 
using std::string;


int main() {
	// 학생의 이름을 묻고 입력받기
	cout << "Enter all words followed bt EOF: ";
	
	string max = "";
	string min = "";

	string word;
	while (cin >> word)
	{
		
			if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;
		
		//크기 확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}
	cout << "Max : " << max << endl
	<< "Min : " << min;
	
	return 0;
} // main 끝
