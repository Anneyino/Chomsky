// Chomsky.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;
struct lang {
	char* Vn;
	char* Vt;
	string* P;
	char S;
};

int main()
{
	int num = 1;
	string languageName, VnString;
	string* Pstring;
	cout << "请输入文法···" << endl;
	cin >> languageName;
	cout << "请输入Vn···(注意用英文逗号隔开)" << endl;
	cin >> VnString;
	cout << "请依次输入产生式规则···(例如N->ND|D)" << endl;

	lang lan1;
	lan1.P = new string[10];
	for (int i = 0; i < 10; i++) {
		lan1.P[i] = "abc";
	}
	cout << "文法" << languageName << "为2型文法" << endl;
	cout << lan1.P[3] << endl;
	system("pause");
    return 0;
}

