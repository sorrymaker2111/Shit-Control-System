#pragma once
//��������
#include <iostream>
#include <course.h>
using namespace std;

class Abstract
{
public:
	string Name; //����
	int Id; //���
	Course** p; //ά���γ������ָ��
	int CourseNumber; //����γ̳���

public :
	virtual void Show_Infor() = 0; //��ʾ������Ϣ
	virtual void Change_Infor() = 0; //�޸ĸ�����Ϣ
};
