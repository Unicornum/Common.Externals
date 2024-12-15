
#pragma once

// ************************** Образцы утверждений *************************** //

// Невыполнение ASSERT_ прекращает тест, невыполнение EXPECT_ генерирует ошибку, 
// но выполнение теста продолжается.

// FAIL() << _T("Добавить тесты");

// **************************** Проверка условия **************************** //

// ASSERT_TRUE(условие) << _T("Дополнительное описание.");
// ASSERT_FALSE(условие);
// EXPECT_TRUE(условие);
// EXPECT_FALSE(условие);

// ************************ Сравнение двух значений ************************* //

// ASSERT_EQ(ожидаемое, полученное);	// ожидаемое == полученное
// ASSERT_NE(знач1, знач2);				// знач1 != знач2
// ASSERT_LT(знач1, знач2);				// знач1 < знач2
// ASSERT_LE(знач1, знач2);				// знач1 <= знач2
// ASSERT_GT(знач1, знач2);				// знач1 > знач2
// ASSERT_GE(знач1, знач2);				// знач1 >= знач2

// EXPECT_EQ(ожидаемое, полученное);	// ожидаемое == полученное
// EXPECT_NE(знач1, знач2);				// знач1 != знач2
// EXPECT_LT(знач1, знач2);				// знач1 < знач2
// EXPECT_LE(знач1, знач2);				// знач1 <= знач2
// EXPECT_GT(знач1, знач2);				// знач1 > знач2
// EXPECT_GE(знач1, знач2);				// знач1 >= знач2

// **************************** Сравнение строк С *************************** //

// ASSERT_STREQ(ожидаемаястр, полученнаястр);		  // одинаковые строки
// ASSERT_STRNE(ожидаемаястр, полученнаястр);		  // строки отличаются
// ASSERT_STRCASEEQ(ожидаемаястр, полученнаястр);	// одинаковые строки без
//                                                   учета регистра символов
// ASSERT_STRCASENE(ожидаемаястр, полученнаястр);	// разные строки без учета
//                                                   регистра символов

// EXPECT_STREQ(ожидаемаястр, полученнаястр);		  // одинаковые строки
// EXPECT_STRNE(ожидаемаястр, полученнаястр);		  // строки отличаются
// EXPECT_STRCASEEQ(ожидаемаястр, полученнаястр);	// одинаковые строки без
//                                                   учета регистра символов
// EXPECT_STRCASENE(ожидаемаястр, полученнаястр);	// разные строки без учета
//                                                   регистра символов

// ******************** Проверка произошедшего исключения ******************* //

// ASSERT_THROW(выражение, ожидаемый_тип_исключения);
// ASSERT_ANY_THROW(выражение);
// ASSERT_NO_THROW(выражение);
// ASSERT_STDEXCEPTION(Expression, ExpectedMessage);

// EXPECT_THROW(выражение, ожидаемый_тип_исключения);
// EXPECT_ANY_THROW(выражение);
// EXPECT_NO_THROW(выражение);
// EXPECT_STDEXCEPTION(Expression, ExpectedRegEx);

// ******************* Сравнение чисел с плавающей запятой ****************** //

// ASSERT_FLOAT_EQ(ожидаемое, полученное);
// ASSERT_DOUBLE_EQ(ожидаемое, полученное);
// ASSERT_NEAR(val1, val2, abs_error);

// EXPECT_FLOAT_EQ(ожидаемое, полученное);
// EXPECT_DOUBLE_EQ(ожидаемое, полученное);
// EXPECT_NEAR(val1, val2, abs_error);

// ********************** Проверка существования файла ********************** //

// ASSERT_EXISTS_FILE_TRUE(PathToFile);
// ASSERT_EXISTS_FILE_FALSE(PathToFile);

// EXPECT_EXISTS_FILE_TRUE(PathToFile);
// EXPECT_EXISTS_FILE_FALSE(PathToFile);

// **************************** Сравнение файлов **************************** //

// ASSERT_FILES_BINARY_EQ(PathToExpectedFile, PathToResultFile);
// ASSERT_FILES_BINARY_NE(PathToExpectedFile, PathToResultFile);
// ASSERT_FILES_STREQ(PathToExpectedFile, PathToResultFile);

// EXPECT_FILES_BINARY_EQ(PathToExpectedFile, PathToResultFile);
// EXPECT_FILES_BINARY_NE(PathToExpectedFile, PathToResultFile);
// EXPECT_FILES_STREQ(PathToExpectedFile, PathToResultFile);

// ******************** Проверка совпадения структуры и ********************* // 
// *************** побайтового совпадения всех файлов в папках ************** //

// EXPECT_DIRECTORY_EQ(PathToExpectedDir, PathToResultDir);
// ASSERT_DIRECTORY_EQ(PathToExpectedDir, PathToResultDir);

// *************************** Блокирование файла *************************** //

// BLOCK_FILE(PathToFile);

// ************* Проверка совпадения экспортируемых dll функций ************* //

// EXPECT_EXPORT(PathToTestDll, { "Function3", "Function4", "Function5" });
// ASSERT_EXPORT(PathToTestDll, { "Function3", "Function4", "Function5" });
