//#include <iostream>
//using namespace std;
//#include <login.h>
//
//Login::Login() //���캯��
//{
//	this->Account = 0;
//	this->Password = "";
//	this->Id = 0;
//	this->key = 0;
//}
//
//void Login::Show_LoginMenu() //��ʾ��¼����
//{
//
//	bool flag = false;
//	while (true)
//	{
//		cout << "----------------------------------" << endl;
//		cout << "--------- ��ѧ��ѡ��ϵͳ ----------" << endl;
//		cout << endl;
//		cout << endl;
//		cout << "��ѡ��:" << endl;
//		cout << "1.��¼�˺�" << endl;
//		cout << "2.ע���˺�" << endl;
//		cout << "3.�˳�ϵͳ" << endl;
//
//		int key = 0;
//		cin >> key;
//
//		switch (key)
//		{
//		case 1:
//			if (this->Login_Account())
//			{
//				flag = true;
//			}
//			break;
//		case 2:
//			this->Creat_Account();
//			break;
//		case 3:
//			this->Exit_System();
//			break;
//		}
//
//		if (flag) //��¼�ɹ�
//		{
//			break;
//		}
//	}
//	
//
//
//}
//
//void Login::Creat_Account() //ע���˺�
//{
//	cout << "-------------����Ա�˺�ע��---------------";
//
//	cout << "�������˺�:  " << endl;
//	int Account = 0;
//	cin >> Account;
//	this->Account = Account;
//
//	cout << "����������:  " << endl;
//	string Password = "";
//	cin >> Password;
//	this->Password = Password;
//
//	cout << "����Ա�˺�ע��ɹ���" << endl;
//
//
//	//���ؽ���
//	system("pause");
//	system("cls");
//
//}
//bool Login::Login_Account() //��¼�˺�
//{
//	cout << "��ѡ��Ҫ��¼���˺�����: " << endl;
//	cout << "1.ѧ��" << endl;
//	cout << "2.��ʦ" << endl;
//	cout << "3.����Ա" << endl;
//
//	int key = 0;
//	cin >> key;
//
//	int Account = 0;
//	string Password = "";
//	int Id = 0;
//	bool flag = false; //�ж��Ƿ��¼�ɹ�
//
//
//	cout << "�������˺ţ�Ҫ��ȫΪ���֣�: " << endl;
//	cin >> Account;
//	cout << "���������루���������ֺ���ĸ�Լ����ŵ�): " << endl;
//	cin >> Password;
//	cout << "�������� (Ҫ��ȫΪ���֣�: " << endl;
//	cin >> Id;
//
//	switch (key)
//	{
//	case 1:
//		//�ж���Ϣ�Ƿ����
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "ѧ���˺ŵ�¼�ɹ�!" << endl;
//			this->key = 1;
//		}
//		else {
//			cout << "��¼ʧ��,��Ϣ����" << endl;
//
//			system("pause");
//			system("cls");
//
//		}
//			
//		break;
//	case 2:
//		//�ж���Ϣ�Ƿ����
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "��ʦ�˺ŵ�¼�ɹ�!" << endl;
//			this->key = 2;
//		}
//		else {
//			cout << "��¼ʧ��,��Ϣ����" << endl;
//
//			system("pause");
//			system("cls");
//
//		}	
//		break;
//	case 3:
//		//�ж���Ϣ�Ƿ����
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "����Ա�˺ŵ�¼�ɹ�!" << endl;
//			this->key = 3;
//		}
//		else {
//			cout << "��¼ʧ��,��Ϣ����" << endl;
//
//			system("pause");
//			system("cls");
//
//		}
//		break;
//	}
//	
//	if (this->key == 1 || this->key == 2 || this->key == 3)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Login::Input_Account() //����
//{
//	cout << "�������˺ţ�Ҫ��ȫΪ���֣�: " << endl;
//	cin >> this->Account;
//	cout << "���������루���������ֺ���ĸ�Լ����ŵ�): " << endl;
//	cin >> this->Password;
//	cout << "�������� (Ҫ��ȫΪ���֣�: " << endl;
//	cin >> this->Id;
//
//}
//
////�жϵ�¼�˺���Ϣ
//bool Login::Is_Same(int Account, string Password, int Id)
//{
//	if (Account == this->Account && Password == this->Password &&
//		Id == this->Id)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Login::Exit_System() //�˳�ϵͳ
//{
//	cout << "ȷ���˳�ϵͳ��" << endl;
//	cout << "1.ȷ���˳�" << endl;
//	cout << "2.��������" << endl;
//
//	int key = 0;
//	cin >> key;
//
//	if (key == 1)
//	{
//		exit(0);
//	}
//	else if (key == 2)
//	{
//		system("pause");
//		system("cls");
//	}
//
//
//}