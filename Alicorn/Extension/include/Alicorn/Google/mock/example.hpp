
#pragma once

/**
* \page page_GMock_Example ������������� ���������� �������� Google Mock
*  <a href=https://code.google.com/p/googletest-translations/wiki/GoogleMockForDummiesRussian> GMock �� ������� </a> \n
*  <a href=https://code.google.com/p/googlemock/wiki/CheatSheet> GMock �� ������� </a> \n
*/

/*
  // ���������� ���������� �������:
  MOCK_METHOD0(Function, void (void));
  MOCK_METHOD1(Function, void (int));
  MOCK_CONST_METHOD0(Function, int (void)); // ��� ����������� �������
  MOCK_METHOD0_T(Function, void (void)); // ��� ������� ���������� ������
  MOCK_METHOD1_WITH_CALLTYPE(__stdcall, Function, void (int));

  using namespace ::testing;

  // ��� ����������� �������� ����� ������������� �������� ����, ��� ������
  // ������� ����������� � ��������� �������.
  InSequence Dummy;

  // ��������� ������������� �������� �� ���������.
  DefaultValue<CString>::Set(_T("DefaultString"));

  EXPECT_CALL(Example, Function())
    .Times(1) // ������� ������� Example ���������� ����� 1 ���
    .Times(AtLeast(1)) // ������� ������� Example ���������� ���� �� 1 ���
    .WillOnce(Return(5)) // ����� ���������� ��� ������ ������
    .WillRepeatedly(Return(0)) // ����� ���������� ��� ���� ����������� �������
    .WillOnce(Throw(std::exception())); // ����� ������� ����������

  // ������� ������ �� default-���� �������
  DefaultValue<CString>::Clear();

*/
