#pragma once
//��ʦ��
#include <iostream>
#include <abstractperson.h>
#include <string>
//�γ�ͷ�ļ�
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>

using namespace std;

class Teacher :public Abstract
{
public:
	Teacher();
	~Teacher();
public:
	string Duty_ForCourse; //����Ŀγ�
public:
	void Show_Infor(); //��ʾ������Ϣ
	void Change_Infor(); //�޸ĸ�����Ϣ
	void Show_Menu(); //��ʾ�˵�
	bool Logout(); //�˳���¼
};

