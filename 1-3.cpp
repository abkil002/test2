#include <iostream>  

#include <ctime>    // ���������� ���� �̱� ���� �������
using namespace std;


int main()
{

	int ran_num;                      //������ �ޱ����� ����. 
	int i;                            //for������ ����
	srand((unsigned int)time(NULL));  //�������� �������� �����ȴ�.


	ran_num=rand()%12+2;     //  0~11�� �������� ���� �Ŀ� 2�� ���ؼ� 2~13������ �������� ����.
	cout<<"Generate number: "<<ran_num<<endl;      //������ ������ ���
	cout<<"Multiplication table "<<ran_num<<endl;  //������ ������ ���
	cout<<endl;
	
	for(i=1;i<=9;i++)    //for���� �̿��ؼ� multiplecation table�� �����.
	cout<<ran_num<<" x "<<i<<" = "<<ran_num*i<<endl;


	cout<<endl;   //����

	return 0;
}