#pragma once
#include<vector>
#include<fstream>
#include"computerRoom.h"
#include"identity.h"
#include"orderFile.h"
#include"globalFile.h"

class Student:public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��
	int m_Id;

	vector<ComputerRoom>vCom;
};
