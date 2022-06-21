/*==========================================================================
Q1.
   키를 정수현 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는 간단한
   프로그램을 작성하라. 입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 
   사용하고 환산 인수로 const 기호 상수를 사용하라.
--------------------------------------------------------------------------*/
/*
#include <iostream>
using namespace std;

int main()
{
	int iHeight(0), iMeter(0), iCmeter(0);

	const int iSub = 100;

	cout << "Enter the Height => ___cm\b\b\b\b\b";
	cin >> iHeight;

	iMeter = iHeight / iSub;
	iCmeter = iHeight - (iMeter * iSub);

	cout << "Conversion result => " << iMeter << "m " << iCmeter << "cm\n";

}
//*/

/*==========================================================================
Q2.
   위도를 도각, 분각, 초각 단위로 요청하여, 10진수 형식으로 출력하는 프로그램을 
   작성하라. 1분각은 60초각이다, 1도각은 60분각이다. 이들을 기호상수로 표현하라.
   각각의 입력 값을 위해 별개의 변수를 사용해야 한다. 실행 예는 다음과 같다.

   ex) 위도를 도, 분, 초 단위로 입력하시오:
	   먼저, 도각을 입력하시오: 37
	   다음에, 분각을 입력하시오: 51
	   끝으로, 초각을 입력하시오: 19
	   37도, 51분, 19초 = 37.8553도
--------------------------------------------------------------------------*/
/*
#include <iostream>
using namespace std;

int main()
{
	int iDeg(0), iArcmin(0), iArcsec(0);
	double dResult(0);

	const double MUL = 60;

	cout << "위도를 도, 분, 초 단위로 입력하시오:\n";
	cout << "먼저, 도각을 입력하시오: ";
	cin >> iDeg;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> iArcmin;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> iArcsec;

	dResult = iDeg + (iArcmin / MUL) + (iArcsec / (MUL * MUL));
	cout << iDeg << "도, " << iArcmin << "분, " << iArcsec << "초 = " << dResult << "도\n";
	
}
//*/