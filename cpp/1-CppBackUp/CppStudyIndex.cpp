#include <iostream>
using namespace std;


int hp = 100;

char a; // 1바이트 (-128~127)
short b; // 2바이트 (-32768~32767)
int c; //4 바이트 (-21.4억 ~ 21.4억)
__int64 d;  //8바이트 (long long) (어마어마하게 크다)

unsigned char ua;  // 1바이트 (0~255)
unsigned short ub; // 2바이트 (0~65536)
unsigned int uc; //4 바이트 (0~42.9억)
unsigned __int64 ud;  //8바이트 (long long) (0~어마어마하게 크다)

//참고) 이론적으로 양수만 존재할수 있는 데이터 unsigned
//무조건 unsinged를 사용할지 의견이 갈림
// 
//귀찮은데 그냥 대충 4바이트로 가면 안될까?
// -> 콘솔/모바일 게임 -> 메모리가 늘 부족하다
// -> 온라인 게임 ->
int main()
{
    //정수 오버플로우
    b = 32767;
    b = b + 1;
    cout << b << endl;

    //정수 언더플로우

    ub = 0;
    ub = ub - 1;

    cout << ub << endl;


    //cout << "체력이 " << hp << "만큼 남았습니다." << endl;
}