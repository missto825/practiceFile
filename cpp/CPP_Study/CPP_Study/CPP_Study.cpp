#include <iostream>
using namespace std;

//const int AIR = 0;
//const int STUN = 1;
//const int ROLYMORPH = 2;
//const int INVINCIBLE = 3;

// 1) 변수의 범위
//스택은 {} 중괄호의 범위가 생존 범위
// 같은 이름 2번 사용할때 문제
// 2) 연산 우선 순위
// 3) 타입 변환


int main()
{
#pragma region data
	//char ch = 'a';
	//// UTF8 UTF16
	//// UTF8은 영어,숫자 1바이트 유럽문자 2바이트 한국어 중국어 3바이트
	//// UTF16은 대부분 2바이트

	//wchar_t wch = L'안'; //2바이트가 됨

	//// Escape Sequence
	//// 표시하기 애매한 애들을 표현
	//// \t = 아스키코드 9 TAB
	//// \n = 아스키코드 10 LineFeed (한줄 아래로(
#pragma endregion
#pragma region 비트연산
	//unsigned char flag;
	//// ~ bitwise not
	//// 단일 숫자의 모든 비트를 대상으로 1은 0으로, 0은 1로 바뀜

	//// & bitwise or
	//// 두 숫자의 모든 비트 쌍을 대상으로, and를 한다.

	//// | bitwise or
	//// 두 숫자의 모든 비트 쌍을 대상으로, or를 한다.

	//// ^ bitwise xor
	//// 두 숫자의 모든 비트를 대상으로, xor를 한다.(두 비트가 같으면 0, 다르면 1)
	//int a = 1;
	//int b = 1234;
	//a = a ^ b;
	//a = a ^ b;
	//cout << a;
	//// b가 뭐여도 다시 a가 튀어나옴

	//// << 비트 좌측 이동
	//// 비트열을 N만큼 왼쪽으로 이동
	//// 왼쪽의 넘치는 N개의 비트는 버림
	//// *2를 할때 자주 보이는 패턴

	//// >> 비트 우측 이동
	//// 비트열을 N만큼 오른쪽으로 이동
	//// 오른쪽의 넘치는 N만큼 버림
	//// 왼쪽 생성되는 N개의 비트는
	//// - 부호 비트가 존재할 경우 부호 비트를 따라감 (부호 있는 정수라면 이 부분을 유의)
	//// - 아니면 0

	//// 실습
	//// 0b0000 [무적][변이][스턴][에어본]
	//flag = (1 << 3);
	//
	//// 변이 상태를 추가(무적 + 변이)
	//flag = (1 << 2);

	//// 무적인지 확인하고 싶다? (다른 상태는 관심 없음)
	//// bitmask 어떤 부분만 필요업는 정보는 덜어내는것
	//bool invincible = ((flag & (1 << 3)) != 0);

	//// 무적이거나 스턴 상태인지 확인하고 싶다면?
	//bool stunOrinincible = ((flag & 0b1010) != 0);
#pragma endregion
#pragma region 메모리구조
	//int hp = 123;
	//cout << hp << endl;
	//// 짝수 여부
	//bool isEven = (hp % 2 == 0);

	//bool isEvenOrDivBy3 = hp % 2 == 0 || hp % 3 == 0;
#pragma endregion	
#pragma region 3)타입변환
	////바구니 교체

	//short hp2 = hp; // 바구니가 작아지면 윗쪽 비트 데이더가 짤린 상태로 저장
	//float hp3 = hp; // 실수로 변환할땐 정밀도차이 가 있어 데이터 손실이 일어날수 있음
	//unsigned int hp4 = hp; // 비트 단위로 보면 비슷한데, 분석하는 방법이 달라져 최대수가 나옴

	////곱셈
	//// - 오버플로우 조심
	//// 나눗셈
	//// - 0 나누기 조심
	//// - 실수 조심
	//int maxHp = 1000;

	//// int / float float / int = float 실수가 우선순위가 높기 때문에
	//float ratio = hp / (float)maxHp;


#pragma endregion
#pragma region 분기문
	//int hp = 100;
	//int damage = 100;

	//hp -= damage; // 피격판정;
	//bool isDead = (hp <= 0); //처치 판정


	//const int ROCK = 0;
	//const int PAPER = 1;
	//const int SCISSORS = 2;

	//int input = ROCK;
	////몬스터가 주구었으면 경험치 추가
	////어셈블리에서 cmp jmp
	//
	////if문이 잇다 조건이 0이 아니면 참, 정수를 넣어도 0만 아니면 됨
	//if (isDead)
	//	cout << "몬스터가 죽었습니다. 경매를 시작합니다" << endl;
	//else //if 두개보다 if else가 효율이 좋음
	//	cout << "몬스터가 반격했습니다" << endl;
	//
	//// if else if else가 많을땐 대신 switch case break를 활용하자
	//// 성능적 차이는 X 대신 가독성이 좋음
	//// 대신 switch case break는 if else를 완전히 대신 할수 없음
	//// 비교할 대상은 정수 계열만 넣을수 있음  (실수 안됨)
	//switch (input)
	//{
	//case ROCK:
	//	cout << "넌 바위네" << endl;
	//	break;
	//case SCISSORS:
	//	cout << "넌 가위네" << endl;
	//	break;
	//case PAPER:
	//	cout << "넌 보네" << endl;
	//	break;
	//default:
	//	cout << "ㅅㅂ 장난하냐 뭘 낸거야" << endl;
	//	break;
	//}
#pragma endregion	
#pragma region 반복문
	// while ~ 동안에
	// if-else 굉장히 유용하지만 한번만  실행하는게 아니라면/
	//ex 게임이 끝날때까지 실행하라

	//int count = 0; // 실수를 할 수 있으니 0 과 < 를 활용하자.
	//while (count < 5)
	//{
	//	cout << "hello world" << endl;
	//	count++;
	//} 
	////do // 거의 사용하지 않음...
	////{
	////	cout << "Hello World" << endl;

	////} while (false);

	//int round = 1;
	//int hp = 100;
	//int damage = 27;

	//while (true)
	//{
	//	hp -= damage;
	//	if (hp < 0)
	//		hp = 0; //음수 체력을 0으ㅡ로 보정

	//	// 시스템 메시지
	//	cout << "Round" << round << "몬스터  체력" << hp << endl;

	//	if (hp == 0)
	//	{
	//		cout << "몬스터 처치!" << endl;
	//		break;
	//	}

	//	if (round == 5)
	//	{
	//		cout << " 제한 라운드 종료" << endl;
	//		break;
	//	}
	//	round++;
	//}

	// 1~10 사이으ㅢ 홀수만 출력하기
	/*for (int count  = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);

		if (isEven)
			continue;

		cout << count << endl;
	}*/
#pragma endregion

srand(time(0));

const int SESER = 1;
const int ROCK = 2;
const int PAPER = 3;
const int END = 4;
while (true) 
{


	int velue = 1 + (rand() % 3);

	int input;
	cout << "숫자를 입력해주세요 가위(1) 바위(2) 보(3) 끝내기(4) 당신의 선택은 : ";
	cin >> input;

	if (input == 4)
	{
		break;
	}
	if (--input == velue || (velue == PAPER && input == SESER))
	{
		cout << "win " + velue << endl;
	}
	else if (input == velue)
	{
		cout << "re " + velue << endl;
	}
	else if (++input == velue || (velue == SESER && input == PAPER))
	{
		cout << "lose " + velue << endl;
	}
}

}