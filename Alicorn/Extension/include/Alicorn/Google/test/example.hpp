
#pragma once

// ************************** ������� ����������� *************************** //

// ������������ ASSERT_ ���������� ����, ������������ EXPECT_ ���������� ������, 
// �� ���������� ����� ������������.

// FAIL() << _T("�������� �����");

// **************************** �������� ������� **************************** //

// ASSERT_TRUE(�������) << _T("�������������� ��������.");
// ASSERT_FALSE(�������);
// EXPECT_TRUE(�������);
// EXPECT_FALSE(�������);

// ************************ ��������� ���� �������� ************************* //

// ASSERT_EQ(���������, ����������);	// ��������� == ����������
// ASSERT_NE(����1, ����2);				// ����1 != ����2
// ASSERT_LT(����1, ����2);				// ����1 < ����2
// ASSERT_LE(����1, ����2);				// ����1 <= ����2
// ASSERT_GT(����1, ����2);				// ����1 > ����2
// ASSERT_GE(����1, ����2);				// ����1 >= ����2

// EXPECT_EQ(���������, ����������);	// ��������� == ����������
// EXPECT_NE(����1, ����2);				// ����1 != ����2
// EXPECT_LT(����1, ����2);				// ����1 < ����2
// EXPECT_LE(����1, ����2);				// ����1 <= ����2
// EXPECT_GT(����1, ����2);				// ����1 > ����2
// EXPECT_GE(����1, ����2);				// ����1 >= ����2

// **************************** ��������� ����� � *************************** //

// ASSERT_STREQ(������������, �������������);		  // ���������� ������
// ASSERT_STRNE(������������, �������������);		  // ������ ����������
// ASSERT_STRCASEEQ(������������, �������������);	// ���������� ������ ���
//                                                   ����� �������� ��������
// ASSERT_STRCASENE(������������, �������������);	// ������ ������ ��� �����
//                                                   �������� ��������

// EXPECT_STREQ(������������, �������������);		  // ���������� ������
// EXPECT_STRNE(������������, �������������);		  // ������ ����������
// EXPECT_STRCASEEQ(������������, �������������);	// ���������� ������ ���
//                                                   ����� �������� ��������
// EXPECT_STRCASENE(������������, �������������);	// ������ ������ ��� �����
//                                                   �������� ��������

// ******************** �������� ������������� ���������� ******************* //

// ASSERT_THROW(���������, ���������_���_����������);
// ASSERT_ANY_THROW(���������);
// ASSERT_NO_THROW(���������);
// ASSERT_STDEXCEPTION(Expression, ExpectedMessage);

// EXPECT_THROW(���������, ���������_���_����������);
// EXPECT_ANY_THROW(���������);
// EXPECT_NO_THROW(���������);
// EXPECT_STDEXCEPTION(Expression, ExpectedRegEx);

// ******************* ��������� ����� � ��������� ������� ****************** //

// ASSERT_FLOAT_EQ(���������, ����������);
// ASSERT_DOUBLE_EQ(���������, ����������);
// ASSERT_NEAR(val1, val2, abs_error);

// EXPECT_FLOAT_EQ(���������, ����������);
// EXPECT_DOUBLE_EQ(���������, ����������);
// EXPECT_NEAR(val1, val2, abs_error);

// ********************** �������� ������������� ����� ********************** //

// ASSERT_EXISTS_FILE_TRUE(PathToFile);
// ASSERT_EXISTS_FILE_FALSE(PathToFile);

// EXPECT_EXISTS_FILE_TRUE(PathToFile);
// EXPECT_EXISTS_FILE_FALSE(PathToFile);

// **************************** ��������� ������ **************************** //

// ASSERT_FILES_BINARY_EQ(PathToExpectedFile, PathToResultFile);
// ASSERT_FILES_BINARY_NE(PathToExpectedFile, PathToResultFile);
// ASSERT_FILES_STREQ(PathToExpectedFile, PathToResultFile);

// EXPECT_FILES_BINARY_EQ(PathToExpectedFile, PathToResultFile);
// EXPECT_FILES_BINARY_NE(PathToExpectedFile, PathToResultFile);
// EXPECT_FILES_STREQ(PathToExpectedFile, PathToResultFile);

// ******************** �������� ���������� ��������� � ********************* // 
// *************** ����������� ���������� ���� ������ � ������ ************** //

// EXPECT_DIRECTORY_EQ(PathToExpectedDir, PathToResultDir);
// ASSERT_DIRECTORY_EQ(PathToExpectedDir, PathToResultDir);

// *************************** ������������ ����� *************************** //

// BLOCK_FILE(PathToFile);

// ************* �������� ���������� �������������� dll ������� ************* //

// EXPECT_EXPORT(PathToTestDll, { "Function3", "Function4", "Function5" });
// ASSERT_EXPORT(PathToTestDll, { "Function3", "Function4", "Function5" });
