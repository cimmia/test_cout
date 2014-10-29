
#include<iostream>
using namespace std;
void call_and_jump();
void test_cout();
void test_switch_case();
int main(){
	//	test_cout();
	//call_and_jump();
	test_switch_case();
	system("pause");
}
void test_cout(){
	cout << "cout<<" << endl;
std:cout << "std::cout<<" << endl;

}
void call_and_jump(){
	//以下逻辑用来解决如下情境，用户输入并提交，如果正确，就可以跳出，如果不能，就一直循环输入提交，直到正确为止
	cout << "Hello,here is help centre.We offer the following service:" << endl <<
		"show the time list,press 1" << endl <<
		"show all train tomorrow,press 2" << endl <<
		"contact me,press 3" << endl
		;
loop:	while (true){
	char a;
	bool if_you_can_end = 1;
	cin >> a;
	switch (a){
	case '1':
		cout << "hello,you have pressed 1" << endl;
		break;
	case '2':
		cout << "hello,you have pressed 2" << endl;
		break;
	case'3':
		cout << "hello,you have pressed 3" << endl;
		break;
	default:
		cout << "Sorry,we can't identify your order,please press again" << endl;
		if_you_can_end = 0;
	}
	if (if_you_can_end == 1){
		cout << "Yes,you can end this service now" << endl;
		break;
	}

}
}
void test_switch_case(){
	cout << "Please input an Integer" << endl;
	int a;
	cin >> a;
	switch (a){
	case 1:cout << a; break;
	case 2:cout << a;
	case 3:cout << 3;
	case 4:cout << 4; break;
	default:cout << "default";
	}
}