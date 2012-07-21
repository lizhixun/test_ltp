#include <iostream>
#include "__ltp_dll.h"
#pragma comment(lib, "__ltp_dll.lib")
using namespace HIT_IR_LTP;


int main()
{
	CreateDOMFromTxt("test.txt");
	SplitSentence(); // 分句
	CRFWordSeg();  // 分词
	PosTag();  // 为词语打上标签
	SaveDOM("testDOM.xml");

	std::cout<<"sentNum is: "<<CountSentenceInDocument()<<std::endl;
	std::cout<<"Word num is: "<<CountWordInDocument()<<std::endl;
	
	std::cout<<"\n以下打印每个句子："<<std::endl;
	int i;
	for(i = 0; i < CountSentenceInDocument(); ++i)
		std::cout<<GetSentence(i)<<std::endl;

    std::cout<<"Press ANY key to Exit"<<std::endl;
	getchar();
	system("exit");
	return 0;
}