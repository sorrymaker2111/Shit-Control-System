#include <C++.h>

CPP::CPP() //���캯��
{
	this->CourseName = "C++�������";
	this->CourseScore = 3;
	this->CourseTeacher = "����";
	this->CourseTime = 21;
}

//��ʾ�γ���Ϣ
void CPP::Show_CourseInfor()
{
	cout << "�γ����ƣ� " << this->CourseName << endl;
	cout << "�γ�ѧ��: " << this->CourseScore << endl;
	cout << "�γ̽�ʦ: " << this->CourseTeacher << endl;
	cout << "�γ�ѧʱ: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}