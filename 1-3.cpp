#include <iostream>  

#include <ctime>    // 무작위적인 수를 뽑기 위한 헤더파일
using namespace std;


int main()
{

	int ran_num;                      //랜덤수 받기위한 변수. 
	int i;                            //for문위한 변수
	srand((unsigned int)time(NULL));  //무작위한 랜덤수가 생성된다.


	ran_num=rand()%12+2;     //  0~11의 랜덤수를 받은 후에 2를 더해서 2~13사이의 랜덤수를 생성.
	cout<<"Generate number: "<<ran_num<<endl;      //문구와 랜덤수 출력
	cout<<"Multiplication table "<<ran_num<<endl;  //문구와 랜덤수 출력
	cout<<endl;
	
	for(i=1;i<=9;i++)    //for문을 이용해서 multiplecation table을 만든다.
	cout<<ran_num<<" x "<<i<<" = "<<ran_num*i<<endl;


	cout<<endl;   //개행

	return 0;
}