#include <system.h>

System::System()
{
	this->p = NULL;
	this->AccountNumber = 0;
}

System::~System()
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->AccountNumber; i++)
		{
			if (this->p[i] != NULL)
			{
				delete p[i];
				p[i] = NULL;
			}
		}

		delete[]p;
		p = NULL;
	}
}

void System::Show_LoginMenu() //��ʾ��¼����
{
	while (true)
	{
		cout << "----------------------------------" << endl;
		cout << "--------- ��ѧ��ѡ��ϵͳ ----------" << endl;
		cout << endl;
		cout << endl;
		cout << "��ѡ��:" << endl;
		cout << "1.��¼�˺�" << endl;
		cout << "2.ע���˺�" << endl;
		cout << "3.��ʾ�����˺�" << endl;
		cout << "4.�˳�ϵͳ" << endl;

		int key = 0;
		cin >> key;

		system("cls");

		switch (key)
		{
		case 1:
			this->Login_Account();
			break;
		case 2:
			this->Creat_Account();
			break;
		case 3:
			this->Show_Account();
			break;
		case 4:
			this->Exit_System();
			break;
		}
               
	}
}

void System::Creat_Account() //ע���˺�
{
	cout << "-------------�ʺ�ע��---------------" << endl;
	cout << "��ѡ��ע���˺ŵ�����: " << endl;
	cout << "1.ѧ���˺�" << endl;
	cout << "2.��ʦ�˺�" << endl;
	cout << "3.����Ա�˺�" << endl;

	//��������ռ�
Account** newspace = new Account* [(this->AccountNumber + 1) * sizeof(Account*)];

    //���������˺�
if (this->p != NULL && this->AccountNumber != 0)
{
	for (int i = 0; i < this->AccountNumber; i++)
	{
		newspace[i] = p[i];
	}
  }
  
   //������˺�

	int key = 0;
	string Users = "";
	string Password = "";
	int Id = 0;

	cin >> key;

	switch (key)
	{
	case 1:
	{
		newspace[this->AccountNumber] = new StudentAccount;
		cout << "�������û���: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "����������: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "��������: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//��������
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "ѧ���˺�ע��ɹ�!" << endl;
		break;
	}
		
	case 2:
	{
		newspace[this->AccountNumber] = new TeacherAccount;
		cout << "�������û���: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "����������: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "��������: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//��������
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "��ʦ�˺�ע��ɹ�!" << endl;
		break;
	}
	case 3:
	{
		newspace[this->AccountNumber] = new ControlAccount;
		cout << "�������û���: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "����������: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "��������: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//��������
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "����Ա�˺�ע��ɹ�!" << endl;
		break;
	}

	}


	


	//���ؽ���
	system("pause");
	system("cls");
}

void System::Login_Account() //��¼�˺�
{

	string Users = "";
	string Password = "";
	int Id = 0;

	cout << "�������û���: " << endl;
	cin >> Users;
	cout << "���������룺 " << endl;
	cin >> Password;
	cout << "��������: " << endl;
	cin >> Id;

	//�ж���û�и��˺�
	int flag = this->Is_Account(Users, Password, Id);

	if (flag != -1)
	{
		//�ж��˺�����
		switch (this->Accout_Type(flag))
		{
		case 1:
			cout << "ѧ���˺ŵ�¼�ɹ�!" << endl;
			this->stu.con2 = this->con;
			system("pause");
			system("cls");
			this->stu.Show_Menu();//����ѧ���˵�
			break;
		case 2:
			cout << "��ʦ�˺ŵ�¼�ɹ�!" << endl;
			system("pause");
			system("cls");
			this->tea.Show_Menu(); //������ʦ�˵�
			break;
		case 3:
			cout << "����Ա�˺ŵ�¼�ɹ�!" << endl;
			system("pause");
			system("cls");
			this->con.Show_Menu(); //�������Ա�˵�
			break;
		}
	}
	else {
		cout << "��¼ʧ�ܣ��˺��������" << endl;
	}

	system("pause");
	system("cls");
	} //��¼�˺�

void System::Exit_System() //�˳�ϵͳ
{
	cout << "ȷ���˳�ϵͳ��" << endl;
	cout << "1.ȷ���˳�" << endl;
	cout << "2.��������" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		exit(0);
	}
	else if (key == 2)
	{
		system("pause");
		system("cls");
	}

}

//�жϵ�¼�˺���Ϣ
int System::Is_Account(string Users, string Password, int Id) 
{
	int temp = -1; //�˺������±�

	for (int i = 0; i < this->AccountNumber; i++)
	{
		if (this->p[i]->Users == Users && this->p[i]->Password == Password
			&& this->p[i]->Id == Id)
		{
			temp = i;
			break;
		}
	}

	return temp;
}

int System::Accout_Type(int flag)//�жϸ��˺�����
{
	int temp = 0;

	switch (this->p[flag]->Flag)
	{
	case 1:
		temp = 1;
		break;
	case 2:
		temp = 2;
		break;
	case 3:
		temp = 3;
		break;	
	}
	return temp;
}

void System::Show_Account() //��ʾ�����˺�
{
	if (this->p != NULL && this->AccountNumber != 0)
	{
		for (int i = 0; i < this->AccountNumber; i++)
		{
			this->p[i]->Show_Account();
		}
	}
	else {
		cout << "��û���κ��˺�!" << endl;
	}
	

	system("pause");
	system("cls");
}


