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
	// 压入栈
	void enter(double num);
	// 取出两操作数
	bool getTwoOperands(double &opnd1, double &opnd2);
	// 运算操作数
	void compute(char op);
public:
	// 执行计算
	void run();
	// 清空操作数栈
	void clear();
	double stringToDouble(const string &str);
};
// 工具：将字符串转换为数字
inline double Calculator::stringToDouble(const string &str){
	istringstream stream(str);  // 字符串输入流
	double result;
	stream>>result;
	return result;
}
// 压入栈
void Calculator::enter(double num){
	s.push(num);
}
// 取出两操作数
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
// 运算操作数
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
// 输入字符串并进行计算
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
// 清空操作数栈
void Calculator::clear(){
	s.clear();
}

#endif

