#pragma once
//ϵͳ��
#include<iostream>

#include <control.h>
#include <student.h>
#include <teacher.h>

#include <account.h>
#include <studentaccount.h>
#include <teacheraccount.h>
#include <controlaccount.h>
using namespace std;


class System
{
public:
	System();
	~System();
public:
	Control con;
	Teacher tea;
	Student stu;


	Account** p; //ά������˺ŵ�����
	int AccountNumber; //�˺���Ŀ

public:
	void Show_LoginMenu(); //��ʾ��¼����
	void Creat_Account(); //ע���˺�
	void Login_Account(); //��¼�˺�
	void Exit_System(); //�˳�ϵͳ
	int Is_Account(string Users, string Password, int Id); //�жϵ�¼�˺���Ϣ
	int Accout_Type(int flag); //�ж��˺�����
	void Show_Account(); //��ʾ�����˺�


};
