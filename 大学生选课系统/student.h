#pragma once
//ѧ��ģ����
#include <iostream>
#include <abstractperson.h>
#include <control.h>
//�γ�ͷ�ļ�
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>
#include <course.h>

using namespace std;

class Student: public Abstract
{
public:
	Control con2;
public:
	Student(); //���캯��
	~Student(); //��������
public :
	void Search_Course(); //���ҿγ�
	void Show_Infor(); //��ʾ������Ϣ
    void Change_Infor(); //�޸ĸ�����Ϣ
	void Select_Course(); //ѡ��γ�
	void Show_SelectedCourse(); //��ʾ��ѡ�γ�
	void Show_Menu(); //��ʾ�˵�
	bool Logout(); //�˳���¼
};
