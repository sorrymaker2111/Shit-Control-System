#pragma once
//�˺���
#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account();
public:
	string Users; //�û���
	string Password; //����
	int Id; //���
	int Flag;//�˺ű�ʶ

public:
	virtual void Show_Account() = 0; //��ʾ�˺���Ϣ
	

};

