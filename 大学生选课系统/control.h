#pragma once
//����Ա��
#include <iostream>
#include <string>
#include<abstractperson.h>

//�γ�ͷ�ļ�
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>
using namespace std;

class Control
{
public :
	Control(); //���캯��
	~Control(); //��������
public:
	string Name; //����
	int Id; //���
	Course** p; //ά���γ������ָ��
	int CourseNumber; //�γ�����


public:
	void Add_Course(); //���ӿγ�
	void Delete_Course(); //ɾ���γ�
	void Show_Course(); //��ʾ�γ�
	void Show_Menu(); //��ʾ�˵�
	bool Logout(); //�˳���¼
	int Is_Course(string name); //�ж��Ƿ��иÿγ�


};

