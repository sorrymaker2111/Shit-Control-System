#include <advancedmath.h>

AdvancedMath::AdvancedMath() //���캯��
{
	this->CourseName = "����";
	this->CourseScore = 3;
	this->CourseTeacher = "����";
	this->CourseTime = 18;
}


//��ʾ�γ���Ϣ
void AdvancedMath::Show_CourseInfor()
{
	cout << "�γ����ƣ� " << this->CourseName << endl;
	cout << "�γ�ѧ��: " << this->CourseScore << endl;
	cout << "�γ̽�ʦ: " << this->CourseTeacher << endl;
	cout << "�γ�ѧʱ: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}