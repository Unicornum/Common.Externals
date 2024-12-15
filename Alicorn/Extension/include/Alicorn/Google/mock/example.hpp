
#pragma once

/**
* \page page_GMock_Example Использование подставных объектов Google Mock
*  <a href=https://code.google.com/p/googletest-translations/wiki/GoogleMockForDummiesRussian> GMock на русском </a> \n
*  <a href=https://code.google.com/p/googlemock/wiki/CheatSheet> GMock на русском </a> \n
*/

/*
  // Объявление подставных функций:
  MOCK_METHOD0(Function, void (void));
  MOCK_METHOD1(Function, void (int));
  MOCK_CONST_METHOD0(Function, int (void)); // Для константной функции
  MOCK_METHOD0_T(Function, void (void)); // Для функции шаблонного класса
  MOCK_METHOD1_WITH_CALLTYPE(__stdcall, Function, void (int));

  using namespace ::testing;

  // Для последующих проверок будет производиться проверка того, что вызовы
  // функций происходили в указанном порядке.
  InSequence Dummy;

  // Установка возвращаемого значения по умолчанию.
  DefaultValue<CString>::Set(_T("DefaultString"));

  EXPECT_CALL(Example, Function())
    .Times(1) // функция объекта Example вызывается ровно 1 раз
    .Times(AtLeast(1)) // функция объекта Example вызывается хотя бы 1 раз
    .WillOnce(Return(5)) // будет возвращено при первом вызове
    .WillRepeatedly(Return(0)) // будет возвращено при всех последующих вызовах
    .WillOnce(Throw(std::exception())); // будет брошено исключение

  // Очистка памяти от default-ного объекта
  DefaultValue<CString>::Clear();

*/
