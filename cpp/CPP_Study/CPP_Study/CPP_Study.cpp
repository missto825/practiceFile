#include <iostream>
using namespace std;

char ch = 'a';
// UTF8 UTF16
// UTF8은 영어,숫자 1바이트 유럽문자 2바이트 한국어 중국어 3바이트
// UTF16은 대부분 2바이트

wchar_t wch = L'안'; //2바이트가 됨

// Escape Sequence
// 표시하기 애매한 애들을 표현
// \t = 아스키코드 9 TAB
// \n = 아스키코드 10 LineFeed (한줄 아래로(
int main()
{

#pragma region 사칙연산 
	//pragma region ..pragma endregion으로 열고닫을수 있음. 비주얼스튜디오의 기능

#pragma endregion
}