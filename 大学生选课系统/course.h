#pragma once
//�γ���
#include <iostream>
using namespace std;

class Course
{

public :
	string CourseName; //�γ�����
	int CourseTime;//��ʱ
	string CourseTeacher; //�ڿ���ʦ
	int CourseScore; //��ʱѧ��

public:
	virtual void Show_CourseInfor() = 0; //��ʾ�γ���Ϣ 
};
