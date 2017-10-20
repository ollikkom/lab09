#include <string>
#include <fstream>
#include <iostream>

/*!
	\brief Функция копирования
	\param[in] text Копировние текстовой строки
	\param[out] out Вывод на экран 
	
	This is the function for output text on screen
	Код функции:
	\code
	void print(const std::string& text, std::ostream& out = std::cout);	
	\endcode
*/
void print(const std::string& text, std::ostream& out = std::cout);

/*!
        \brief Функция копирования
        \param[in] text Копировние текстовой строки
        \param[out] out Вывод на экран  

        This is the function for output text on screen
  	Код функции:         
        \code
        void print(const std::string& text, std::ofstream& out);
        \endcode
*/
void print(const std::string& text, std::ofstream& out);
