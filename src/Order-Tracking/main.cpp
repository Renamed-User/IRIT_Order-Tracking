#include <iostream>

#include <fcntl.h>
#include <io.h>

// Я буду очень скучать по using namespace std; :( 

int main()
{
	std::locale::global(std::locale(".UTF8"));
	(void)_setmode(_fileno(stdout), _O_U16TEXT);
	(void)_setmode(_fileno(stdin), _O_U16TEXT);

	std::wcout << L"Умер студент и попадает в Ад. Тут его Сатана и спрашивает, ему Ад студенческий или обычный?" << std::endl;
	std::wcout << L"Ну тот и отвечает - А что я в студенческом аду не видел? Давай обычный. " << std::endl;
	std::wcout << L"И вроде всё нормально, но каждый вечер забивают по одному говзлю в зад. " << std::endl;
	std::wcout << L"Через месяц студент не выдерживает и слёзно просится в студенческий Ад. Ну Сатана и соглашается. " << std::endl;
	std::wcout << L"А в студенческом Аду вообще всё чётко, весело. И кутит так студент месяц. " << std::endl;
	std::wcout << L"Но одним вечером вдруг приходит Сатана с ведром гвоздей... " << std::endl;

	return 0;
}