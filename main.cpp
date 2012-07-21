#include <iostream>
#include "__ltp_dll.h"
#pragma comment(lib, "__ltp_dll.lib")
using namespace HIT_IR_LTP;


int main()
{
	CreateDOMFromTxt("test.txt");
	SplitSentence(); // �־�
	CRFWordSeg();  // �ִ�
	PosTag();  // Ϊ������ϱ�ǩ
	SaveDOM("testDOM.xml");

	std::cout<<"sentNum is: "<<CountSentenceInDocument()<<std::endl;
	std::cout<<"Word num is: "<<CountWordInDocument()<<std::endl;
	
	std::cout<<"\n���´�ӡÿ�����ӣ�"<<std::endl;
	int i;
	for(i = 0; i < CountSentenceInDocument(); ++i)
		std::cout<<GetSentence(i)<<std::endl;

    std::cout<<"Press ANY key to Exit"<<std::endl;
	getchar();
	system("exit");
	return 0;
}