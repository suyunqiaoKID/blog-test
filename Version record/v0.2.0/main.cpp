#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<time.h>
using namespace std;
void sighup();
void sighin();
void sigh();
void index();
void watch();
void write();
void us();
void superman();
void super();
void addman();
void watchman();
void null();
bool manb(string);
char in;
string my="NULL";
bool man=false;
int main(){
	char c;
	system("title suyunqiaoKID's blog");
	cout<<"-------------------"<<endl;
	cout<<"| 1.ע��"<<endl; 
	cout<<"| 2.��¼"<<endl;
	cout<<"| 3.�˳�"<<endl; 
	cout<<"--------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : sighup();break;
		case '2' : sighin();break;
		case '3' : return 0;
		default : cout<<"��������ȷ����"<<endl;system("cls");return main();
	}
}
void sighup(){
	string username,password,DATA1,DATA2;
	bool tf=false;
	cout<<"�����������û���(A-Z,a-z,0-9)"<<endl;
	cin>>username;
	cout<<"��������������(A-Z,a-z,0-9)"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(DATA1==username){
			tf=true;
			break;
		}
	}
	if(tf==true){
		cout<<"ע��ʧ�ܣ��û����ѱ���¼�����ڷ��ص�¼����..."<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	else{
		ofstream out("user.txt",ios::app);
		out<<username<<endl;
		out<<password<<endl;
		out.close();
		cout<<"ע��ɹ����뷵�ص�¼"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
void sighin(){
	string username,password;
	string DATA1,DATA2;
	cout<<"�����������û���"<<endl;
	cin>>username;
	cout<<"��������������"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(username==DATA1&&password==DATA2){
			my=username;
			in.close();
			return sigh();
		}
	}
	cout<<"������û�����������������"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sigh(){
	system("cls");
	cout<<"��ӭ������"<<my<<endl;
	cout<<"���ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	superman();
	return index();
}
void index(){
	null();
	system("cls");
	char c;
	cout<<"��ӭ����suyunqiaoKID��blog��     ��ǰ�û���"<<my<<"   �û���ݣ�";
	if(man==true)
	cout<<"����Ա"<<endl<<endl;
	else
	cout<<"��ͨ�û�"<<endl<<endl; 
	cout<<"----------------------------"<<endl;
	cout<<"| 1.д����"<<endl;
	cout<<"| 2.������"<<endl;
	cout<<"| 3.������"<<endl;
	cout<<"| 4.�ǳ�"<<endl;
	cout<<"| 5.ˢ��ʱ��"<<endl;
	cout<<"----------------------------"<<endl;
	time_t now=time(0);
	tm*ltm=localtime(&now);
	cout<<"��ǰʱ�䣺"<<1900+ltm->tm_year;
    cout<<"��"<<1+ltm->tm_mon;
    cout<<"��"<<ltm->tm_mday;
    cout<<"��"<<ltm->tm_hour<<":";
    cout<<ltm->tm_min<<":";
    cout<<ltm->tm_sec<<endl;
	c=getch();
	switch(c){
		case '1' : write();break;
		case '2' : watch();break;
		case '3' : super();break;
		case '4' : my="NULL";man=false;cout<<"�ѵǳ����ͣ����ڷ��ص�¼����...";Sleep(3000);system("cls");main();break;
		case '5' : system("cls");index();break;
		default : cout<<"��������ȷ����"<<endl;system("cls");return index();
	}
}
void write(){
	null();
	string blog;
	system("cls");
	cout<<"�����벩�����ݣ���Enter��ո��Է���"<<endl; 
	cin>>blog;
	ofstream out("blog.txt",ios::app);
	out<<my<<endl;
	out<<blog<<endl;
	out.close();
	cout<<"�ѷ������ͣ����ڷ�����ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
void watch(){
	null();
	system("cls");
	string username,blog;
	char c;
	ifstream in("blog.txt");
	while(in>>username&&in>>blog){
		system("cls");
		cout<<"��������鿴��һƪ����,��Q������ҳ"<<endl;
		cout<<"���ߣ�"<<username<<endl; 
		cout<<"���ݣ�"<<blog<<endl;
		c=getch();
		if(c=='q'||c=='Q'){
			cout<<"����Ϊ��������ҳ..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
		}
		
	}
	cout<<"�Ѿ������һƪ�����ˣ�����Ϊ��������ҳ..."<<endl;
	Sleep(3000);
	system("cls");
	index();
}
void superman(){
	string DATA;
	ifstream in("superman.txt");
	while(in>>DATA){
		if(DATA==my){
			man=true;
			return;
		}
	}
}
void super(){
	null();
	system("cls");
	char c;
	if(man==false){
		cout<<"��û�й���ԱȨ�ޣ��޷����ʴ˽��棬����Ϊ��������ҳ..."<<endl;
		Sleep(3000);
		system("cls");
		return index();
	}
	cout<<"----------------------------"<<endl;
	cout<<"| 1.�鿴���й���Ա"<<endl;
	cout<<"| 2.��ӹ���Ա"<<endl;
	cout<<"| 3.������ҳ"<<endl;
	cout<<"----------------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : watchman();break;
		case '2' : addman();break;
		case '3' : cout<<"����Ϊ��������ҳ...";Sleep(3000);system("cls");index();
		default : cout<<"��������ȷ����"<<endl;system("cls");return super();
	}
}
void watchman(){
	null();
	string DATA;
	int total=0;
	char c;
	ifstream in("superman.txt");
	while(in>>DATA){
		total++;
		cout<<"����Ա��ţ�"<<total<<endl;
		cout<<"�û�����"<<DATA<<endl<<endl;
	}
	cout<<"�����������"<<endl;
	c=getch();
	cout<<"����Ϊ�����ع������..."<<endl;
	Sleep(3000);
	system("cls");
	return super();
}
void addman(){
	null();
	string username,DATA;
	bool tf=false;
	ofstream out("superman.txt",ios::app);
	ifstream in("user.txt");
	cout<<"��������Ҫ��ӵĹ���Ա�û���"<<endl;
	cin>>username;
	while(in>>DATA){
		if(DATA==username){
			tf=true;
			break;
		}
	}
	if(tf==false){
		cout<<"δ���û��б����ҵ�"<<username<<"�û�������Ϊ�����ع������..."<<endl;
		Sleep(3000);
		system("cls");
		return super();
	}
	else{
		if(manb(username)==true){
			out<<username<<endl;
			cout<<"��ӳɹ�������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			super();
		}
		else{
			cout<<username<<"�û����ǹ���Ա������Ϊ�����ع������..."<<endl;
			Sleep(3000);
			system("cls");
			return super();
		}
	}
}
bool manb(string username){
	null();
	string DATA;
	ifstream in("superman.txt");
	while(in>>DATA){
		if(username==DATA)
		return false;
	}
	return true;
}
void null(){
	if(my=="NULL"){
		cout<<"�˺�״̬�쳣�������µ�¼��"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
