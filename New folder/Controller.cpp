
#include "Model.h"
#include <iostream>


Controller::Controller()
{
}
void Controller::ConnectDB() {
	m.ConnectDB();
}
void Controller::DisConnectDB() {
	m.DisConnectDB();
}
int Controller::Login() {
	return m.Login();
}
int Controller::SingUp() {
	return m.SingUp();
}
void Controller::SignOut() {
	m.SignOut();
}
int Controller::AddFriend() {
	return m.AddFriend();
}
int Controller::Block() {
	return m.Block();
}
int Controller::SendMess() {
	return m.SendMess();
}
int Controller::SendMess_ctr_l() {
	return m.SendMess_ctr_l();
}
/*
int Controller::ShowMessDetail() {
	return m.ShowMessDetail();
}*/
int Controller::showmess(){
	 return m.showmess();
}
/*
void Controller::ShowFriend_ctr_C(){
	  m.ShowFriend_ctr_C();
}
void Controller::BlockFriend(){
	 m.BlockFriend();
}
*/
void Controller::Detail_fr() {
	m.Detail_fr();
}
/*
void Controller::Update_fr(){
	 m.Update_fr();
}
*/
void Controller::Error() {
	m.Error();
}
void Controller::setNguoidung(string s) {
	m.setNguoidung(s);
}
string Controller::getNguoidung() {
	return m.getNguoidung();
}
Controller::~Controller()
{
}
