#include <chinesehistory.h>

ChineseHistory::ChineseHistory() //���캯��
{
	this->CourseName = "�й�ʷ";
	this->CourseScore = 2;
	this->CourseTeacher = "����";
	this->CourseTime = 20;
}

//��ʾ�γ���Ϣ
void ChineseHistory::Show_CourseInfor()
{
	cout << "�γ����ƣ� " << this->CourseName << endl;
	cout << "�γ�ѧ��: " << this->CourseScore << endl;
	cout << "�γ̽�ʦ: " << this->CourseTeacher << endl;
	cout << "�γ�ѧʱ: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}