#include <soccer.h>

Soccer::Soccer() //���캯��
{
	this->CourseName = "�����";
	this->CourseScore = 1;
	this->CourseTeacher = "Τ����";
	this->CourseTime = 10;
}

//��ʾ�γ���Ϣ
void Soccer::Show_CourseInfor()
{
	cout << "�γ����ƣ� " << this->CourseName << endl;
	cout << "�γ�ѧ��: " << this->CourseScore << endl;
	cout << "�γ̽�ʦ: " << this->CourseTeacher << endl;
	cout << "�γ�ѧʱ: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}