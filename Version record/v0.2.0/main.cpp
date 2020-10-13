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
	cout<<"| 1.注册"<<endl; 
	cout<<"| 2.登录"<<endl;
	cout<<"| 3.退出"<<endl; 
	cout<<"--------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : sighup();break;
		case '2' : sighin();break;
		case '3' : return 0;
		default : cout<<"请输入正确代号"<<endl;system("cls");return main();
	}
}
void sighup(){
	string username,password,DATA1,DATA2;
	bool tf=false;
	cout<<"请输入您的用户名(A-Z,a-z,0-9)"<<endl;
	cin>>username;
	cout<<"请输入您的密码(A-Z,a-z,0-9)"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(DATA1==username){
			tf=true;
			break;
		}
	}
	if(tf==true){
		cout<<"注册失败，用户名已被登录，正在返回登录界面..."<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
	else{
		ofstream out("user.txt",ios::app);
		out<<username<<endl;
		out<<password<<endl;
		out.close();
		cout<<"注册成功！请返回登录"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
void sighin(){
	string username,password;
	string DATA1,DATA2;
	cout<<"请输入您的用户名"<<endl;
	cin>>username;
	cout<<"请输入您的密码"<<endl;
	cin>>password;
	ifstream in("user.txt");
	while(in>>DATA1&&in>>DATA2){
		if(username==DATA1&&password==DATA2){
			my=username;
			in.close();
			return sigh();
		}
	}
	cout<<"密码或用户名错误！请重新输入"<<endl;
	Sleep(3000);
	system("cls");
	sighin();
}
void sigh(){
	system("cls");
	cout<<"欢迎回来！"<<my<<endl;
	cout<<"正在返回主页..."<<endl;
	Sleep(3000);
	system("cls");
	superman();
	return index();
}
void index(){
	null();
	system("cls");
	char c;
	cout<<"欢迎来到suyunqiaoKID的blog！     当前用户："<<my<<"   用户身份：";
	if(man==true)
	cout<<"管理员"<<endl<<endl;
	else
	cout<<"普通用户"<<endl<<endl; 
	cout<<"----------------------------"<<endl;
	cout<<"| 1.写博客"<<endl;
	cout<<"| 2.看博客"<<endl;
	cout<<"| 3.管理博客"<<endl;
	cout<<"| 4.登出"<<endl;
	cout<<"| 5.刷新时间"<<endl;
	cout<<"----------------------------"<<endl;
	time_t now=time(0);
	tm*ltm=localtime(&now);
	cout<<"当前时间："<<1900+ltm->tm_year;
    cout<<"年"<<1+ltm->tm_mon;
    cout<<"月"<<ltm->tm_mday;
    cout<<"日"<<ltm->tm_hour<<":";
    cout<<ltm->tm_min<<":";
    cout<<ltm->tm_sec<<endl;
	c=getch();
	switch(c){
		case '1' : write();break;
		case '2' : watch();break;
		case '3' : super();break;
		case '4' : my="NULL";man=false;cout<<"已登出博客，正在返回登录界面...";Sleep(3000);system("cls");main();break;
		case '5' : system("cls");index();break;
		default : cout<<"请输入正确代号"<<endl;system("cls");return index();
	}
}
void write(){
	null();
	string blog;
	system("cls");
	cout<<"请输入博客内容，按Enter或空格以发布"<<endl; 
	cin>>blog;
	ofstream out("blog.txt",ios::app);
	out<<my<<endl;
	out<<blog<<endl;
	out.close();
	cout<<"已发布博客，正在返回主页..."<<endl;
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
		cout<<"按任意键查看下一篇博客,按Q返回主页"<<endl;
		cout<<"作者："<<username<<endl; 
		cout<<"内容："<<blog<<endl;
		c=getch();
		if(c=='q'||c=='Q'){
			cout<<"正在为您返回主页..."<<endl;
			Sleep(3000);
			system("cls");
			return index();
		}
		
	}
	cout<<"已经是最后一篇博客了，正在为您返回主页..."<<endl;
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
		cout<<"您没有管理员权限，无法访问此界面，正在为您返回主页..."<<endl;
		Sleep(3000);
		system("cls");
		return index();
	}
	cout<<"----------------------------"<<endl;
	cout<<"| 1.查看所有管理员"<<endl;
	cout<<"| 2.添加管理员"<<endl;
	cout<<"| 3.返回主页"<<endl;
	cout<<"----------------------------"<<endl;
	c=getch();
	switch(c){
		case '1' : watchman();break;
		case '2' : addman();break;
		case '3' : cout<<"正在为您返回主页...";Sleep(3000);system("cls");index();
		default : cout<<"请输入正确代号"<<endl;system("cls");return super();
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
		cout<<"管理员编号："<<total<<endl;
		cout<<"用户名："<<DATA<<endl<<endl;
	}
	cout<<"按任意键返回"<<endl;
	c=getch();
	cout<<"正在为您返回管理界面..."<<endl;
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
	cout<<"请输入需要添加的管理员用户名"<<endl;
	cin>>username;
	while(in>>DATA){
		if(DATA==username){
			tf=true;
			break;
		}
	}
	if(tf==false){
		cout<<"未在用户列表中找到"<<username<<"用户，正在为您返回管理界面..."<<endl;
		Sleep(3000);
		system("cls");
		return super();
	}
	else{
		if(manb(username)==true){
			out<<username<<endl;
			cout<<"添加成功，正在为您返回管理界面..."<<endl;
			Sleep(3000);
			system("cls");
			super();
		}
		else{
			cout<<username<<"用户已是管理员，正在为您返回管理界面..."<<endl;
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
		cout<<"账号状态异常，请重新登录！"<<endl;
		Sleep(3000);
		system("cls");
		main();
	}
}
