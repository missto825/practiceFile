#include <iostream>
using namespace std;

bool isHighLevel = true;
bool isPlayer = true;
bool isMale = false;

//[Note]
// 사실 bool은 그냥 1바이트 정수에 불과
// 왜 정수 시간에 안다뤘냐
// -> 일리있음. 어셈블리에서 bool이라는 것은 없음
// bool만 봐도 참/거짓 둘중 하나라는 힌트를 줌.(가독성)
int isFemale = 1;


// bool < 1바이트 정수 
// 0과 1만 쓰지만 최소단위가 1바이트라 1비트가 아닌 1바이트를 사용함
int main()
{
	cout << isHighLevel << endl;
}