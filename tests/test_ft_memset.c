#include "src/unity.h"
#include "../Libft/libft.h"
#include <string.h>
#include <stdlib.h>

void test1_ft_memset_should_ReturnSameValueAsMemset(void)
{
	char str1[50];
	char str2[50];
	strcpy(str1,"This is string test");
	strcpy(str2,"This is string test");
	TEST_ASSERT_EQUAL_STRING(memset(str1,'$',7), ft_memset(str2,'$',7));
}

void test2_ft_memset_should_ReturnSameValueAsMemset(void)
{
	char str1[50];
	char str2[50];
	strcpy(str1,"T");
	strcpy(str2,"");
	TEST_ASSERT_EQUAL_STRING(memset(str1,'$',7), ft_memset(str2,'$',7));
}


void test1_ft_bzero_should_ReturnSameValueAsBzero(void)
{
	char str1[50];
	char str2[50];
	strcpy(str1,"T");
	strcpy(str2,"");
	ft_bzero(str1, 7);
	bzero(str2, 7);
	TEST_ASSERT_EQUAL_STRING(str1, str2);
}

void test1_ft_memcpy_should_ReturnSameValueAsMemcpy(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(memcpy(dst1, src1, 3), ft_memcpy(dst2, src2, 3));
}

void test1_ft_memccpy_should_ReturnSameValueAsMemccpy(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(memccpy(dst1, src1, 100, 7), ft_memccpy(dst2, src2, 100, 7));
}

void test1_ft_memmove_should_ReturnSameValueAsMemmove(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(memmove(dst1, src1, 3), ft_memmove(dst2, src2, 3));
}

void test1_ft_memchr_should_ReturnSameValueAsMemchr(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(memchr(src1, 84, 3), ft_memchr(src2, 84, 3));
}

void test1_ft_memcmp_should_ReturnSameValueAsMemcmp(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"This and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"This and dogs another string");
	
	TEST_ASSERT_EQUAL_INT(memcmp(src1, dst1, 5), ft_memcmp(src2, dst2, 5));
}

void test1_ft_strlen_should_ReturnSameValueAsStrlen(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"This and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"This and dogs another string");
	
	TEST_ASSERT_EQUAL_INT(strlen(src1), ft_strlen(src2));
}

void test1_ft_strdup_should_ReturnSameValueAsStrdup(void)
{
	char src1[50];
	char src2[50];
	
	strcpy(src1,"This is a string");
	strcpy(src2,"This is a string");
	
	TEST_ASSERT_EQUAL_STRING(strdup(src1), ft_strdup(src2));
}

void test1_ft_strcpy_should_ReturnSameValueAsStrcpy(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strcpy(dst1, src1), ft_strcpy(dst2, src2));
}

void test1_ft_strncpy_should_ReturnSameValueAsStrncpy(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strncpy(dst1, src1, 4), ft_strncpy(dst2, src2, 4));
}

void test1_ft_strcat_should_ReturnSameValueAsStrcat(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strcat(src1, dst1), ft_strcat(src2, dst2));
}


void test1_ft_strncat_should_ReturnSameValueAsStrncat(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strncat(src1, dst1, 3), ft_strncat(src2, dst2, 3));
}

void test1_ft_strlcat_should_ReturnSameValueAsStrlcat(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_INT(strlcat(src1, dst1, 15), ft_strlcat(src2, dst2, 15));
}

void test1_ft_strchr_should_ReturnSameValueAsStrchr(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strchr(src1, 124), ft_strchr(src2, 124));
}

void test1_ft_strrchr_should_ReturnSameValueAsStrrchr(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is a string");
	strcpy(dst1,"cats and dogs another string");
	strcpy(src2,"This is a string");
	strcpy(dst2,"cats and dogs another string");
	
	TEST_ASSERT_EQUAL_STRING(strrchr(src1, 124), ft_strrchr(src2, 124));
}

void test1_ft_strstr_should_ReturnSameValueAsStrstr(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is cats string");
	strcpy(dst1,"cats");
	strcpy(src2,"This is cats string");
	strcpy(dst2,"cats");
	
	TEST_ASSERT_EQUAL_STRING(strstr(src1, dst1), ft_strstr(src2, dst2));
}

void test1_ft_strnstr_should_ReturnSameValueAsStrnstr(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"This is cats string");
	strcpy(dst1,"cats");
	strcpy(src2,"This is cats string");
	strcpy(dst2,"cats");
	
	TEST_ASSERT_EQUAL_STRING(strnstr(src1, dst1, 3), ft_strnstr(src2, dst2, 3));
}

void test1_ft_strcmp_should_ReturnSameValueAsStrcmp(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"");
	strcpy(dst1,"cats");
	strcpy(src2,"");
	strcpy(dst2,"cats");
	
	TEST_ASSERT_EQUAL_INT(strcmp(src1, src2), ft_strcmp(src1, src2));
	TEST_ASSERT_EQUAL_INT(strcmp(dst1, dst2), ft_strcmp(dst1, dst2));
}

void test1_ft_strncmp_should_ReturnSameValueAsStrncmp(void)
{
	char src1[50];
	char dst1[50];
	char src2[50];
	char dst2[50];
	
	strcpy(src1,"");
	strcpy(dst1,"cats");
	strcpy(src2,"");
	strcpy(dst2,"cats");
	
	TEST_ASSERT_EQUAL_INT(strncmp(src1, src2, 3), ft_strncmp(src1, src2, 3));
	TEST_ASSERT_EQUAL_INT(strncmp(dst1, dst2, 3), ft_strncmp(dst1, dst2, 3));
}


void test1_ft_atoi_should_ReturnSameValueAsAtoi(void)
{
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[50];
	
	strcpy(str1,"-----67634353");
	strcpy(str2,"+*()(!@(!676762728392839");
	strcpy(str3,"jshdjksdhfk87990asdnkjsnd");
	strcpy(str4,"");
	
	TEST_ASSERT_EQUAL_INT(atoi(str1), ft_atoi(str1));
	TEST_ASSERT_EQUAL_INT(atoi(str2), ft_atoi(str2));
	TEST_ASSERT_EQUAL_INT(atoi(str3), ft_atoi(str3));
	TEST_ASSERT_EQUAL_INT(atoi(str4), ft_atoi(str4));
}

void test1_ft_isalpha_should_ReturnSameValueAsIsalpha(void)
{
	
	TEST_ASSERT_EQUAL_INT(isalpha(200), ft_isalpha(200));
	TEST_ASSERT_EQUAL_INT(isalpha(-40), ft_isalpha(-40));
	TEST_ASSERT_EQUAL_INT(isalpha(150), ft_isalpha(150));
	TEST_ASSERT_EQUAL_INT(isalpha(107), ft_isalpha(107));
}

void test1_ft_isdigit_should_ReturnSameValueAsIsdigit(void)
{
	
	TEST_ASSERT_EQUAL_INT(isdigit('a'), ft_isdigit('a'));
	TEST_ASSERT_EQUAL_INT(isdigit('b'), ft_isdigit('b'));
	TEST_ASSERT_EQUAL_INT(isdigit(1), ft_isdigit(1));
	TEST_ASSERT_EQUAL_INT(isdigit(-7), ft_isdigit(-7));
}

void test1_ft_islnum_should_ReturnSameValueAsIslnum(void)
{
	
	TEST_ASSERT_EQUAL_INT(isalnum('a'), ft_isalnum('a'));
	TEST_ASSERT_EQUAL_INT(isalnum('b'), ft_isalnum('b'));
	TEST_ASSERT_EQUAL_INT(isalnum(1), ft_isalnum(1));
	TEST_ASSERT_EQUAL_INT(isalnum(-7), ft_isalnum(-7));
}

void test1_ft_isascii_should_ReturnSameValueAsIsascii(void)
{
	
	TEST_ASSERT_EQUAL_INT(isascii('a'), ft_isascii('a'));
	TEST_ASSERT_EQUAL_INT(isascii('b'), ft_isascii('b'));
	TEST_ASSERT_EQUAL_INT(isascii(1), ft_isascii(1));
	TEST_ASSERT_EQUAL_INT(isascii(-7), ft_isascii(-7));
}

void test1_ft_isprint_should_ReturnSameValueAsIsprint(void)
{
	
	TEST_ASSERT_EQUAL_INT(isprint(31), ft_isprint(31));
	TEST_ASSERT_EQUAL_INT(isprint(32), ft_isprint(32));
	TEST_ASSERT_EQUAL_INT(isprint(176), ft_isprint(176));
	TEST_ASSERT_EQUAL_INT(isprint(-7), ft_isprint(-7));
}

void test1_ft_toupper_should_ReturnSameValueAsToupper(void)
{
	
	TEST_ASSERT_EQUAL_INT(toupper(31), ft_toupper(31));
	TEST_ASSERT_EQUAL_INT(toupper(32), ft_toupper(32));
	TEST_ASSERT_EQUAL_INT(toupper(176), ft_toupper(176));
	TEST_ASSERT_EQUAL_INT(toupper(-7), ft_toupper(-7));
}

void test1_ft_tolower_should_ReturnSameValueAsTolower(void)
{
	
	TEST_ASSERT_EQUAL_INT(tolower(31), ft_tolower(31));
	TEST_ASSERT_EQUAL_INT(tolower(32), ft_tolower(32));
	TEST_ASSERT_EQUAL_INT(tolower(176), ft_tolower(176));
	TEST_ASSERT_EQUAL_INT(tolower(-7), ft_tolower(-7));
}

void test1_ft_memalloc_should_ReturnSameValueAsMemalloc(void)
{
	char str1[50];
	
	ft_memset(str1, 0, 3);
	
	TEST_ASSERT_EQUAL_MEMORY(ft_memalloc(3), str1, 3);
}


/****change bases terminal****/
//echo 'obase=10;ibase=8;0177'  | bc

int main(void)
{
	UNITY_BEGIN();
	
	/*****ft_memset_tests*****/
	RUN_TEST(test2_ft_memset_should_ReturnSameValueAsMemset);
	RUN_TEST(test1_ft_memset_should_ReturnSameValueAsMemset);

	/*****ft_memcpytests*****/
	RUN_TEST(test1_ft_memcpy_should_ReturnSameValueAsMemcpy);

	/*****ft_bzero*****/
	RUN_TEST(test1_ft_bzero_should_ReturnSameValueAsBzero);

	/*****ft_memccpy*****/
	RUN_TEST(test1_ft_memccpy_should_ReturnSameValueAsMemccpy);

	/*****ft_memccpy*****/
	RUN_TEST(test1_ft_memmove_should_ReturnSameValueAsMemmove);	

	/*****ft_memchr*****/
	RUN_TEST(test1_ft_memchr_should_ReturnSameValueAsMemchr);	

	/*****ft_memcmp*****/
	RUN_TEST(test1_ft_memcmp_should_ReturnSameValueAsMemcmp);

	/*****ft_strlen*****/
	RUN_TEST(test1_ft_strlen_should_ReturnSameValueAsStrlen);

	/*****ft_strdup*****/
	RUN_TEST(test1_ft_strdup_should_ReturnSameValueAsStrdup);

	/*****ft_strcpy*****/
	RUN_TEST(test1_ft_strcpy_should_ReturnSameValueAsStrcpy);

	/*****ft_strncpy*****/
	RUN_TEST(test1_ft_strncpy_should_ReturnSameValueAsStrncpy);
	
	/*****ft_strcat*****/
	RUN_TEST(test1_ft_strcat_should_ReturnSameValueAsStrcat);
	
	/*****ft_strncat*****/
	RUN_TEST(test1_ft_strncat_should_ReturnSameValueAsStrncat);

	/*****ft_strlcat*****/
	RUN_TEST(test1_ft_strlcat_should_ReturnSameValueAsStrlcat);

	/*****ft_strchr*****/
	RUN_TEST(test1_ft_strchr_should_ReturnSameValueAsStrchr);

	/*****ft_strchr*****/
	RUN_TEST(test1_ft_strrchr_should_ReturnSameValueAsStrrchr);

	/*****ft_strstr*****/
	RUN_TEST(test1_ft_strstr_should_ReturnSameValueAsStrstr);

	/*****ft_strnstr*****/
	RUN_TEST(test1_ft_strnstr_should_ReturnSameValueAsStrnstr);

	/*****ft_strcmp*****/
	RUN_TEST(test1_ft_strcmp_should_ReturnSameValueAsStrcmp);

	/*****ft_strncmp*****/
	RUN_TEST(test1_ft_strncmp_should_ReturnSameValueAsStrncmp);

	/*****ft_atoi*****/
	RUN_TEST(test1_ft_atoi_should_ReturnSameValueAsAtoi);

	/*****ft_isalpha*****/
	RUN_TEST(test1_ft_isalpha_should_ReturnSameValueAsIsalpha);

	/*****ft_isdigit*****/
	RUN_TEST(test1_ft_isdigit_should_ReturnSameValueAsIsdigit);

	/*****ft_islnum*****/
	RUN_TEST(test1_ft_islnum_should_ReturnSameValueAsIslnum);

	/*****ft_isascii*****/
	RUN_TEST(test1_ft_isascii_should_ReturnSameValueAsIsascii);

	/*****ft_isprint*****/
	RUN_TEST(test1_ft_isprint_should_ReturnSameValueAsIsprint);

	/*****ft_toupper*****/
	RUN_TEST(test1_ft_toupper_should_ReturnSameValueAsToupper);

	/*****ft_lower*****/
	RUN_TEST(test1_ft_tolower_should_ReturnSameValueAsTolower);

	/*****ft_memalloc*****/
	RUN_TEST(test1_ft_memalloc_should_ReturnSameValueAsMemalloc);

	


	return UNITY_END();
}
