

#include "Login.h"
#include "WordGame.h"
#include "Register.h"
#include "ResetPassword.h"
#include "LearnMenu.h"
#include "wordTest.h"
#include "Wordle.h"
#include "addWord.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	while (true) {

		wordGame::Login loginMenu;
		loginMenu.ShowDialog();
		if (loginMenu.switchReset) {
			wordGame::ResetPassword resetMenu;
			resetMenu.ShowDialog();
			if (resetMenu.switchLogin) {
				continue;
			}
		}
		if (loginMenu.switchReg) {
			wordGame::Register registerMenu;
			registerMenu.ShowDialog();
			if (registerMenu.switchLog) {
				continue;
			}
			else {
				user = registerMenu.user0;
				break;
			}
		}
		else {
			user = loginMenu.user0;
			break;
		}

		



}
	if (user != nullptr) {
		while (true) {
		wordGame::WordGame mainMenu(user);
		Application::Run(% mainMenu);

		
			if (mainMenu.switchLearn) {
				wordGame::LearnMenu learnMenu(user);
				learnMenu.ShowDialog();
				if (learnMenu.switchMain) {
					continue;
				}
			}
			else if (mainMenu.switchTest) {
				wordGame::wordTest testMenu(user);
				testMenu.ShowDialog();
				if (testMenu.switchMain) {
					continue;
				}
			}
			else if (mainMenu.switchWordle) {
				wordGame::Wordle wordle;
				wordle.ShowDialog();
				if (wordle.switchMain) {
					continue;
				}
			}
			else if (mainMenu.switchNewWord) {
				wordGame::addWord addword;
				addword.ShowDialog();
				if (addword.switchMain) {
					continue;
				}
			}
			else {
				break;
			}
	}

	}
	else {
		MessageBox::Show("Exited the program.", "", MessageBoxButtons::OK);

	}
	
	





}