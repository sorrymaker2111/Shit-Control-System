#include <english.h>

English::English() //���캯��
{
	this->CourseName = "Ӣ��";
	this->CourseScore = 2;
	this->CourseTeacher = "����";
	this->CourseTime = 15;
}

//��ʾ�γ���Ϣ
void English::Show_CourseInfor()
{
	cout << "�γ����ƣ� " << this->CourseName << endl;
	cout << "�γ�ѧ��: " << this->CourseScore << endl;
	cout << "�γ̽�ʦ: " << this->CourseTeacher << endl;
	cout << "�γ�ѧʱ: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}