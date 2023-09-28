#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "stack.h"
#include <cassert>
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

class Calculator{
	Stack<double> s;
	// ѹ��ջ
	void enter(double num);
	// ȡ����������
	bool getTwoOperands(double &opnd1, double &opnd2);
	// ���������
	void compute(char op);
public:
	// ִ�м���
	void run();
	// ��ղ�����ջ
	void clear();
	double stringToDouble(const string &str);
};
// ���ߣ����ַ���ת��Ϊ����
inline double Calculator::stringToDouble(const string &str){
	istringstream stream(str);  // �ַ���������
	double result;
	stream>>result;
	return result;
}
// ѹ��ջ
void Calculator::enter(double num){
	s.push(num);
}
// ȡ����������
bool Calculator::getTwoOperands(double &opnd1, double &opnd2){
	if(s.isEmpty()){
		cerr<<"missing operand!"<<endl;
		return false;
	}
	opnd1 = s.pop();
	if(s.isEmpty()){
		cerr<<"missing operand!"<<endl;
		return false;
	}
	opnd2 = s.pop();
	return true;
}
// ���������
void Calculator::compute(char op){
	double op1, op2;
	bool result = getTwoOperands(op1, op2);
	if(!result){
		s.clear();
	}
	switch(op){
		case '+':
			s.push(op1 + op2);
			break;
		case '-':
			s.push(op1 - op2);
			break;
		case '*':
			s.push(op1 * op2);
			break;
		case '/':
			s.push(op1 / op2);
			break;
		default:
			cerr<<"unrecognized operator!"<<endl;
	}
	cout<<"the result is "<<s.peek()<<endl;
}
// �����ַ��������м���
void Calculator::run(){
	string str;
	while(cin>>str, str!= "q"){
		switch(str[0]){
			case 'c':s.clear();break;
			case '-':
				if(str.size() > 1){
					enter(stringToDouble(str));
				}else{
					compute(str[0]);
				}
				break;
			case '+':
			case '*':
			case '/':
			case '^':
				compute(str[0]);
				break;
			default:
				enter(stringToDouble(str));
		}
	}
}
// ��ղ�����ջ
void Calculator::clear(){
	s.clear();
}

#endif

