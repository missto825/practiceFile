#include <iostream>
using namespace std;




int main()
{
#pragma region data
	char ch = 'a';
	// UTF8 UTF16
	// UTF8은 영어,숫자 1바이트 유럽문자 2바이트 한국어 중국어 3바이트
	// UTF16은 대부분 2바이트

	wchar_t wch = L'안'; //2바이트가 됨

	// Escape Sequence
	// 표시하기 애매한 애들을 표현
	// \t = 아스키코드 9 TAB
	// \n = 아스키코드 10 LineFeed (한줄 아래로(
#pragma endregion
#pragma region 비트연산
	unsigned char flag;
	// ~ bitwise not
	// 단일 숫자의 모든 비트를 대상으로 1은 0으로, 0은 1로 바뀜

	// & bitwise or
	// 두 숫자의 모든 비트 쌍을 대상으로, and를 한다.

	// | bitwise or
	// 두 숫자의 모든 비트 쌍을 대상으로, or를 한다.

	// ^ bitwise xor
	// 두 숫자의 모든 비트를 대상으로, xor를 한다.(두 비트가 같으면 0, 다르면 1)
	int a = 1;
	int b = 1234;
	a = a ^ b;
	a = a ^ b;
	cout << a;
	// b가 뭐여도 다시 a가 튀어나옴

	// << 비트 좌측 이동
	// 비트열을 N만큼 왼쪽으로 이동
	// 왼쪽의 넘치는 N개의 비트는 버림
	// *2를 할때 자주 보이는 패턴

	// >> 비트 우측 이동
	// 비트열을 N만큼 오른쪽으로 이동
	// 오른쪽의 넘치는 N만큼 버림
	// 왼쪽 생성되는 N개의 비트는
	// - 부호 비트가 존재할 경우 부호 비트를 따라감 (부호 있는 정수라면 이 부분을 유의)
	// - 아니면 0

	// 실습
	// 0b0000 [무적][변이][스턴][에어본]
	flag = (1 << 3);
	
	// 변이 상태를 추가(무적 + 변이)
	flag = (1 << 2);

	// 무적인지 확인하고 싶다? (다른 상태는 관심 없음)
	// bitmask 어떤 부분만 필요업는 정보는 덜어내는것
	bool invincible = ((flag & (1 << 3)) != 0);

	// 무적이거나 스턴 상태인지 확인하고 싶다면?
	bool stunOrinincible = ((flag & 0b1010) != 0);
#pragma endregion
}