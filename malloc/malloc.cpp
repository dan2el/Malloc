// malloc.cpp : 애플리케이션의 진입점을 정의합니다.
//
//변수
//지역(스택)
//전역, 정적, 외부(데이터)


//메모리 영역
//스택
//데이터
//ROM
//힙 영역(동적할당)


#include "malloc.h"
#include "Array.h"

using namespace std;

int main()
{
	//	동적 할당
	//	1. 런타임 중에 대응 가능
	//	2. 사용자가 직접 메모리를 관리해야함(해제)


	cout << "malloc" << endl;

	//float* pFloat = (float*)pInt;
	//*pFloat = 2.4f;
	int* pInt = nullptr;

	int num = 0;
	cin >> num;

	if (num == 100) {
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt) {
		free(pInt);
	}



	//	가변배열

	tArr s = {};
	InitArr(&s);


	for (int i = 0; i < 10; i++) {
		PushBack(&s, i);
	}

	for (int i = 0; i < s.iCount; i++) {
		cout << s.pInt[i] << endl;
	}

	ReleaseArr(&s);


	for (int i = 0; i < s.iCount; i++) {
		cout << s.pInt[i] << endl;
	}


	return 0;
}
