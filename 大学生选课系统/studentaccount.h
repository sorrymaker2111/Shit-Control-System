#pragma once
//ѧ���˺�
#include <iostream>
#include <account.h>
using namespace std;

class StudentAccount : public Account
{
public:
	StudentAccount();
    void Show_Account(); //��ʾ�˺���Ϣ
};
